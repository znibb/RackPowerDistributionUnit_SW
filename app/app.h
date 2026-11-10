#pragma once

#ifdef __cplusplus
extern "C" {
#endif

/// Called once from main() after all CubeMX peripheral init has run.
void app_init(void);

/// Called repeatedly from the main loop.
void app_loop(void);

#ifdef __cplusplus
}
#endif
