VIA_ENABLE = yes
VIAL_ENABLE = yes
VIAL_INSECURE = yes

# see https://github.com/GEIGEIGEIST/qmk-config-klor/blob/main/klor/rp2040/rules.mk 

MCU = rp2040

BOOTLOADER = rp2040

ALLOW_WARNINGS = yes
LTO_ENABLE = no
AUDIO_ENABLE = no

CONVERT_TO = kb2040

HAPTIC_ENABLE = yes
HAPTIC_DRIVER += SOLENOID
