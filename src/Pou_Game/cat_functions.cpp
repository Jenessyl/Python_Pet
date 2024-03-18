#include "cat_functions.h"
#include <chrono>
#include <iostream>
#include <string>
#include <thread>

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

// Sprites for pet cat
void catNormal() {
  static bool frameToggle = true;
  if (frameToggle) {
    // Displaying cat ASCII art!
    std::cout << COLOR_PINK << COLOR_BOLD
              << "                      \n"
                 "    /\\_____/\\   \n"
                 "   /  o   o  \\ meow  \n"
                 "  ( ==  ^  == )   _\n"
                 "   )         (   ) )\n"
                 "  (           ) ( ( \n"
                 " ( (  )   (  ) )   ) \n"
                 "(__(__)___(__)__)  )\n"
              << COLOR_RESET << std::endl;
  } else {
    std::cout << COLOR_LIGHT_PINK << COLOR_BOLD
              << "                      \n"
                 "    /\\_____/\\   meow \n"
                 "   /  o   o  \\     \n"
                 "  ( ==  ^  == )   _\n"
                 "   )         (  ( (\n"
                 "  (           )  ) ) \n"
                 " ( (  )   (  ) )  ( \n"
                 "(__(__)___(__)__)  )\n"
              << COLOR_RESET << std::endl;
  }

  frameToggle = !frameToggle; // toggles frames
}

void catEating() {
  static bool frameToggle = true;
  if (frameToggle) {
    // Displaying cat ASCII art!
    std::cout << COLOR_BROWN << COLOR_BOLD
              << "                      \n"
                 "    /\\_____/\\ munch   \n"
                 "   /  o   o  \\     \n"
                 "  ( ==  ^  == )  _\n"
                 "   )         (  ( (\n"
                 "  (           )  ) ) \n"
                 " ( (  )   (  ) )  ( \n"
                 "(__(__)___(__)__)  )\n"
              << COLOR_RESET << std::endl;
  } else {
    std::cout << COLOR_BOLD
              << "                 munch    \n"
                 "    /\\_____/\\    \n"
                 "   /  o   o  \\        \n"
                 "  ( ==  o  == )   _\n"
                 "   )         (   ) )\n"
                 "  (           ) ( ( \n"
                 " ( (  )   (  ) )   ) \n"
                 "(__(__)___(__)__) (\n"
              << COLOR_RESET << std::endl;
  }

  frameToggle = !frameToggle; // toggles frames
}

void catCleaning() {
  static bool frameToggle = true;
  if (frameToggle) {
    // Displaying cat ASCII art!
    std::cout << COLOR_BROWN
              << "              ⸯ    ⸯ  \n"
                 "  ⸯ /\\_____/\\ meow   \n"
                 "   /  -   -  \\  ⸯ  \n"
                 "  ( ==  ^  == )  _\n"
                 "   )         (  ( (\n"
                 "ⸯ (           ) ⸯ) ) \n"
                 " ( (  )   (  ) )  ( \n"
                 "(__(__)___(__)__)  )\n"
              << COLOR_RESET << std::endl;
  } else {
    std::cout << COLOR_BLUE
              << "  ⟡       ˚      meow ⟡  \n"
                 "  ˚ /\\_____/\\˚   \n"
                 " ⟡ /  o   o  \\  ⟡     \n"
                 "  ( ==  ^  == )  ˚_\n"
                 "   )         (   ) )\n"
                 "˚ (           ) ( ( \n"
                 " ( (  )   (  ) )   ) \n"
                 "(__(__)___(__)__) (\n"
              << COLOR_RESET << std::endl;
  }

  frameToggle = !frameToggle; // toggles frames
}

void catSleeping() {
  static bool frameToggle = true;
  if (frameToggle) {
    // Displaying cat ASCII art!
    std::cout << COLOR_DARK_GREY << COLOR_BOLD
              << "                      \n"
                 "    /\\_____/\\   Z \n"
                 "   /  -   -  \\ Z    \n"
                 "  ( ==  ^  == )  _\n"
                 "   )         (  ( (\n"
                 "  (           )  ) ) \n"
                 " ( (  )   (  ) )( ( \n"
                 "(__(__)___(__)__)  )\n"
              << COLOR_RESET << std::endl;
  } else {
    std::cout << COLOR_BOLD
              << "                 Z    \n"
                 "    /\\_____/\\   Z \n"
                 "   /  -   -  \\        \n"
                 "  ( ==  ^  == )   _\n"
                 "   )         (   ) )\n"
                 "  (           ) ( ( \n"
                 " ( (  )   (  ) ) ) ) \n"
                 "(__(__)___(__)__) (\n"
              << COLOR_RESET << std::endl;
  }

  frameToggle = !frameToggle; // toggles frames
}

void catDied() {
  static bool frameToggle = true;
  if (frameToggle) {
    // Displaying cat ASCII art!
    std::cout << COLOR_RED
              << "                      \n"
                 "    /\\_____/\\    \n"
                 "   /  X   X  \\     \n"
                 "  ( ==  ^  == )  _\n"
                 "   )         (  ( (\n"
                 "  (           )  ) ) \n"
                 " ( (  )   (  ) )  ( \n"
                 "(__(__)___(__)__)  )\n"
              << COLOR_RESET << std::endl;
  } else {
    std::cout << COLOR_BOLD
              << "                     \n"
                 "    /\\_____/\\    \n"
                 "   /  X   X  \\        \n"
                 "  ( ==  ^  == )  _\n"
                 "   )         (  ( (\n"
                 "  (           )  ) ) \n"
                 " ( (  )   (  ) )  ( \n"
                 "(__(__)___(__)__)  )\n"
              << COLOR_RESET << std::endl;
  }

  frameToggle = !frameToggle; // toggles frames
}

// Functions for sprtie display use
void catClearScreen() { std::cout << "\033[2J\033[H"; }

void catDisplayNormal(int numFrames, int frameDelay) {
  for (int i = 0; i < numFrames; ++i) {
    catClearScreen();
    catNormal();
    std::cout << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(frameDelay));
  }
}

void catDisplayEating(int numFrames, int frameDelay) {
  for (int i = 0; i < numFrames; ++i) {
    catClearScreen();
    catEating();
    std::cout << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(frameDelay));
  };
}

void catDisplayCleaning(int numFrames, int frameDelay) {
  for (int i = 0; i < numFrames; ++i) {
    catClearScreen();
    catCleaning();
    std::cout << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(frameDelay));
  };
}

void catDisplaySleeping(int numFrames, int frameDelay) {
  for (int i = 0; i < numFrames; ++i) {
    catClearScreen();
    catSleeping();
    std::cout << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(frameDelay));
  };
}

void catDisplayDied(int numFrames, int frameDelay) {
  for (int i = 0; i < numFrames; ++i) {
    catClearScreen();
    catDied();
    std::cout << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(frameDelay));
  };
}

// // CAT TEST SPRITES
// int main() {

//   catDisplayNormal();
//   catDisplayEating();
//   catDisplayCleaning();
//   catDisplaySleeping();
//   catDisplayDied();

//   return 0;
// }