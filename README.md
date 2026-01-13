# Chip-8 Emulator

This project is a fully-functional Chip-8 emulator built in C++.

## Architecture

Chip-8 is a virtual machine of sorts from the 1970s built to make it easier to program video games on early microcomputers.

The components of the Chip-8 architecture are as follows:-
- Memory: 4 KB = 4096 bytes
- Registers:
    - 16 8-bit general purpose registers (V0 to VF)
    - 16-bit index register
    - 16-bit program counter
    - 8-bit stack pointer register
- Display: 64x32 pixels in monochrome
- Keyboard: 16-key keypad