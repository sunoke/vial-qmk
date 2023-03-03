VIA_ENABLE = yes
VIAL_ENABLE = yes
# VIAL_INSECURE = yes

# see https://github.com/GEIGEIGEIST/qmk-config-klor/blob/main/klor/rp2040/rules.mk 

MCU = rp2040

BOOTLOADER = rp2040

ALLOW_WARNINGS = yes
LTO_ENABLE = no
AUDIO_ENABLE = no

CONVERT_TO = kb2040

HAPTIC_ENABLE = yes
HAPTIC_DRIVER += SOLENOID


BOOTMAGIC_ENABLE = no       # Enable Bootmagic Lite
MOUSEKEY_ENABLE = yes       # Mouse keys
EXTRAKEY_ENABLE = yes       # Audio control and System control
CONSOLE_ENABLE = no         # Console for debug
COMMAND_ENABLE = no         # Commands for debug and configuration
NKRO_ENABLE = no           # Enable N-Key Rollover
BACKLIGHT_ENABLE = no       # Enable keyboard backlight functionality
RGBLIGHT_ENABLE = no        # Enable keyboard RGB underglow
# AUDIO_ENABLE = yes          # Audio output

RGB_MATRIX_ENABLE = no     # Enable WS2812 RGB matrix
RGB_MATRIX_DRIVER = WS2812
SPLIT_KEYBOARD = yes

RGBLIGHT_SUPPORTED = no
RGB_MATRIX_SUPPORTED = no

SRC += oneshot.c
