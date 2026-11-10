# RackPowerDistributionUnit_SW

Firmware for the STM32F407VET6, written in C++ on top of the CubeMX-generated HAL.
Build system: CMake + Ninja. Debug/flash: OpenOCD over the ST-LINK V3 on J7 (SWD).

## Prerequisites (Arch/Artix)
```bash
sudo pacman -S arm-none-eabi-gcc arm-none-eabi-newlib arm-none-eabi-gdb openocd cmake ninja
```
- STM32CubeMX (AUR `stm32cubemx`, or the installer from st.com)
- udev access to the ST-LINK (the `openocd` package ships `60-openocd.rules`; otherwise copy
  `/opt/stm32cubeprog/Drivers/rules/49-stlinkv3.rules` to `/etc/udev/rules.d/`), then
  `sudo udevadm control --reload && sudo udevadm trigger` and replug the probe.
- Optional (VSCodium): clangd, CMake Tools, Cortex-Debug extensions.

## Layout
| Path | Purpose |
|---|---|
| `stm32cubemx/RackPowerDistributionUnit.ioc` | Peripheral/clock configuration (edit in CubeMX) |
| `app/` | Hand-written C++ (`app_init()` / `app_loop()`, ITM `_write`) |
| `openocd.cfg` | OpenOCD config for ST-LINK + STM32F4 |
| `.vscode/` | Build/flash tasks and Cortex-Debug launch config |

CubeMX owns `Core/`, `Drivers/`, `cmake/stm32cubemx/` and the startup/linker files. Keep all
application code in `app/` and only touch generated files inside `USER CODE` blocks.

## CubeMX project
CubeMX generates into `stm32cubemx/` (next to the `.ioc`); that folder is the CMake project root.
Settings used: Toolchain = CMake, heap `0x400`, stack `0x800`. Keep application code in `app/` and
only touch generated files inside `USER CODE` blocks. Already wired up:
- `stm32cubemx/CMakeLists.txt` (generated once, safe to edit): C++20, `app/` sources and include path
- `stm32cubemx/Core/Src/main.c`: `app_init()` in `USER CODE BEGIN 2`, `app_loop()` in `USER CODE BEGIN 3`

## Build, flash, debug
```bash
cd stm32cubemx
cmake --preset Debug && cmake --build --preset Debug
cd ..
openocd -f openocd.cfg -c "program stm32cubemx/build/Debug/RackPowerDistributionUnit.elf verify reset exit"
```
Debugging: in VSCodium run the "Debug (OpenOCD, ST-LINK)" launch config. `printf` output appears
in the ITM console (SWO, stimulus port 0, 72 MHz core clock). Sanity check the probe/target link with:
```bash
openocd -f openocd.cfg -c "init; targets; exit"
```
