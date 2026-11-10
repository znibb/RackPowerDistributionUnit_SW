// Hello-world: prints a greeting and a 1 Hz counter over SWO/ITM.
#include "app.h"

#include <cstdint>
#include <cstdio>

#include "main.h"  // CubeMX-generated: pulls in the HAL

namespace {

std::uint32_t tick_count = 0;

}  // namespace

extern "C" void app_init(void) {
  std::printf("Hello from RackPowerDistributionUnit! SYSCLK=%lu Hz\n",
              static_cast<unsigned long>(SystemCoreClock));
}

extern "C" void app_loop(void) {
  std::printf("tick %lu\n", static_cast<unsigned long>(tick_count++));
  HAL_Delay(1000);
}
