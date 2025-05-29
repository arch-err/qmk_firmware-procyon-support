// #define DYNAMIC_KEYMAP_LAYER_COUNT 7 // Or 16, or whatever number is needed to cover all your enum layers.
// --- Essential RGB_MATRIX Definitions ---
#define RGB_MATRIX_LED_COUNT    72                  // Confirmed correct from info.json
#define RGB_MATRIX_LED_PIN      GP10                // <--- FOUND IT! Use this pin and UNCOMMENT!


// --- RGB Matrix Adjustments (Needed for sethsv_all, HUI, HUD, SAI, SAD, VAI, VAD keycodes) ---
#define RGB_MATRIX_HUE_ADJUST       // Enables hue adjustment functions and keycodes
#define RGB_MATRIX_SAT_ADJUST       // Enables saturation adjustment functions and keycodes
#define RGB_MATRIX_VAL_ADJUST       // Enables value (brightness) adjustment functions and keycodes


// --- Default Solid Teal Color ---
#define RGB_MATRIX_DEFAULT_MODE RGB_MATRIX_SOLID_COLOR // Correct mode for solid color
#define RGB_MATRIX_DEFAULT_HUE  180                 // Hue for Teal
#define RGB_MATRIX_DEFAULT_SAT  255                 // Full saturation
#define RGB_MATRIX_DEFAULT_VAL  128                 // Full brightness
#define RGB_MATRIX_STARTUP_MODE RGB_MATRIX_SOLID_COLOR // Correct mode for solid color
#define RGB_MATRIX_STARTUP_HUE  180                 // Hue for Teal
#define RGB_MATRIX_STARTUP_SAT  255                 // Full saturation
#define RGB_MATRIX_STARTUP_VAL  128                 // Full brightness


// --- Enable RGB_MATRIX Effects ---
#define RGB_MATRIX_FRAMEBUFFER_EFFECTS          // <--- UNCOMMENT THIS! Essential for per-pixel control
#define ENABLE_RGB_MATRIX_SOLID_COLOR           // <--- UNCOMMENT THIS! Essential for solid color mode
