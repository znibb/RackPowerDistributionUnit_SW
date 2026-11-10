// Route newlib's stdout/stderr to the ITM stimulus port 0 (SWO).
// Output only appears while a debugger has enabled ITM/SWO; otherwise
// ITM_SendChar() is a no-op, so this is safe to leave in place.
#include <cstdint>

#include "main.h"  // pulls in CMSIS core (ITM_SendChar)

extern "C" int _write(int /*fd*/, char* buf, int len) {
  for (int i = 0; i < len; ++i) {
    ITM_SendChar(static_cast<std::uint32_t>(buf[i]));
  }
  return len;
}
