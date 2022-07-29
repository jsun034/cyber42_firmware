# MCU name
MCU = atmega32u4

AUTO_SHIFT_ENABLE = yes
TAP_DANCE_ENABLE = yes

# Bootloader selection
BOOTLOADER = caterina


F_CPU = 8000000
# F_USB = $(F_CPU)

# Interrupt driven control endpoint task(+60)
OPT_DEFS += -DINTERRUPT_CONTROL_ENDPOINT


# Boot Section Size in *bytes*
OPT_DEFS += -DBOOTLOADER_SIZE=4096


# Build Options
#   comment out to disable the options.
#
BOOTMAGIC_ENABLE = no	# Virtual DIP switch configuration(+1000)
MOUSEKEY_ENABLE = no	# Mouse keys(+4700)
EXTRAKEY_ENABLE = yes	# Audio control and System control(+450)
CONSOLE_ENABLE = no	# Console for debug(+400)
COMMAND_ENABLE = no    # Commands for debug and configuration
SLEEP_LED_ENABLE = no  # Breathing sleep LED during USB suspend
UNICODE_ENABLE = no    
BACKLIGHT_ENABLE = no  # Enable keyboard backlight functionality
AUDIO_ENABLE = no
RGBLIGHT_ENABLE = no

NKRO_ENABLE = no		# USB Nkey Rollover - if this doesn't work, see here: https://github.com/tmk/tmk_keyboard/wiki/FAQ#nkro-doesnt-work
BLUETOOTH_ENABLE = yes
BLUETOOTH_DRIVER = BluefruitLE