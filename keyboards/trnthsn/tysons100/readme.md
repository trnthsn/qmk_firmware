# Tyson S100

A full-size keyboard PCB with split Backspace and split Right Shift layout support.

* Keyboard Maintainer: [trnthsn](https://github.com/trnthsn)
* Hardware Supported: Tyson S100 PCB
* Hardware Availability: [ThanhSon.Mech](https://www.facebook.com/ThanhSon.mech)

Make example for this keyboard (after setting up your build environment):

    make trnthsn/tysons100:default

Flashing example for this keyboard:

    make trnthsn/tysons100:default:flash

Make examples for MCU variants:

    make trnthsn/tysons100/stm32f103:default
    make trnthsn/tysons100/stm32f072:default

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix and plug in the keyboard
* **Physical reset button**: Briefly press the reset button on the PCB
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if available
