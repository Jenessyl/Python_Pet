// #include "Pet.h"
#include "Pet.h"
#include <iostream>
#include <thread>
#include <chrono>
#include <string>

#define COLOR_RESET "\033[0m"
#define COLOR_RED "\033[31m"
#define COLOR_BLUE "\033[34m"
#define COLOR_MAGENTA "\033[35m"
#define COLOR_BOLD "\033[1m"
#define COLOR_UNDERLINE "\033[4m"
#define BG_BLUE "\033[44m"
#define BG_CYAN "\033[46m"
#define COLOR_BROWN "\e[38;5;130m"
#define COLOR_DARK_GREY "\033[90m"
#define COLOR_PINK "\033[38;5;206m"
#define COLOR_LIGHT_PINK "\033[38;5;218m"

// here is where each pet type class is made, cat, dog, and frog.


void Cat::Display() {
       static bool frameToggle = true;
        if (frameToggle) {
        // Displaying cat ASCII art!
        std::cout << COLOR_PINK << COLOR_BOLD <<
                     "    /\\_____/\\   \n"
                     "   /  o   o  \\ meow  \n"
                     "  ( ==  ^  == )   _\n"
                     "   )         (   ) )\n"
                     "  (           ) ( ( \n"
                     " ( (  )   (  ) )   ) \n"
                     "(__(__)___(__)__)  )\n" << COLOR_RESET << std::endl;
        } else {
        std::cout << COLOR_LIGHT_PINK << COLOR_BOLD <<
                     "    /\\_____/\\   meow \n"
                     "   /  o   o  \\     \n"
                     "  ( ==  ^  == )   _\n"
                     "   )         (  ( (\n"
                     "  (           )  ) ) \n"
                     " ( (  )   (  ) )  ( \n"
                     "(__(__)___(__)__)  )\n" << COLOR_RESET << std::endl;
        }        

        frameToggle = !frameToggle; //toggles frames
}

void Cat::clearScreen() { std::cout << "\033[2J\033[H"; }


void Cat::Normal(int numFrames = 6, int frameDelay = 500) {
    for (int i = 0; i < numFrames; ++i) {
        clearScreen();
        Display();
        std::cout << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(frameDelay));
    
    };
}

void Cat::Eating(int numFrames = 6, int frameDelay = 500)

//TEST SPRITES
int main() {
    Cat testCat;
    testCat.Normal();

return 0;    
}