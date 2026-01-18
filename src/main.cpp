#include "chip8.h"
#include <iostream>
#include <chrono>
#include <thread>

// Terminal rendering
void draw_graphics(Chip8& chip8){
    // Clear screen
    std::cout << "\033[2J\033[1;1H";
    // Draw 64x32 display
    for(int y=0; y<32; y++){
        for(int x=0; x<64; x++){
            if(chip8.display[x + (y*64)] == 0) std::cout << " ";
            else std::cout << "█";
        }
        std::cout << std::endl;
    }
}

int main(int argc, char** argv){
    if(argc < 2){
        std::cerr << "Usage: " << argv[0] << " <ROM file>" << std::endl;
        return 1;
    }
    // Create emulator and load ROM
    Chip8 chip8;
    chip8.load_rom(argv[1]);
    // Emulation loop
    while(true){
        chip8.emulate_cycle();
        if(chip8.draw_flag){
            draw_graphics(chip8);
            chip8.draw_flag = false;
        }
        // I have to put keyboard input here

        // Sleep to control CPU speed (~500Hz)
        std::this_thread::sleep_for(std::chrono::microseconds(2000));
    }
    return 0;
}