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

## Keyboard Mapping

- Original Chip-8 keypad layout (hexadecimal):
```
1 2 3 C
4 5 6 D
7 8 9 E
A 0 B F
```

- The keyboard mapping used here:
```
1 2 3 4
Q W E R
A S D F
Z X C V
```