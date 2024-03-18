#include "dog_functions.h"
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

// dog Sprites
void dogNormal() {
  static bool frameToggle = true;
  if (frameToggle) {
    // Displaying dog ASCII art!
    std::cout << COLOR_PINK << COLOR_BOLD
              << "        /  \\    woof     \n"
                 "       / ..|\\     \n"
                 "      (_\\  |_)    \n"
                 "      /  \\y'      \n"
                 "     /     \\      \n"
                 "_   /  `   |      \n"
                 "\\\\/  \\  | _\\      \n"
                 " \\   /_ || \\_    \n"
                 "  \\____)|_) \\_)   \n"
              << COLOR_RESET << std::endl;
  } else {
    std::cout << COLOR_LIGHT_PINK << COLOR_BOLD
              << "        /  \\      \n"
                 "       / ..|\\ woof     \n"
                 "      (_\\  |_)    \n"
                 "      /  \\y'      \n"
                 "     /     \\      \n"
                 "_   /  `   |      \n"
                 "\\\\/  \\  | _\\      \n"
                 " \\   /_ || \\_    \n"
                 "  \\____)|_) \\_)   \n"
              << COLOR_RESET << std::endl;
  }

  frameToggle = !frameToggle; // toggles frames
}
void dogEating() {
  static bool frameToggle = true;
  if (frameToggle) {
    // Displaying dog ASCII art!
    std::cout << COLOR_BROWN << COLOR_BOLD
              << "        /  \\      \n"
                 "       / ..|\\   munch   \n"
                 "      (_\\  |_)    \n"
                 "      /  \\y'      \n"
                 "     /     \\      \n"
                 " _  /  `   |      \n"
                 "\\\\/  \\  | _\\      \n"
                 " \\   /_ || \\_    \n"
                 "  \\____)|_) \\_)   \n"
              << COLOR_RESET << std::endl;
  } else {
    std::cout << COLOR_BOLD
              << "        /  \\      \n"
                 "       / ..|\\       munch  \n"
                 "      (_\\  |_)    \n"
                 "      /  \\O'      \n"
                 "     /     \\      \n"
                 "_   /  `   |      \n"
                 "\\\\/  \\  | _\\      \n"
                 " \\   /_ || \\_    \n"
                 "  \\____)|_) \\_)   \n"
              << COLOR_RESET << std::endl;
  }

  frameToggle = !frameToggle; // toggles frames
}
void dogCleaning() {
  static bool frameToggle = true;
  if (frameToggle) {
    // Displaying dog ASCII art!
    std::cout << COLOR_BROWN
              << "        /  \\  ⸯ   \n"
                 "    ⸯ  / ..|\\     \n"
                 " ⸯ    (_\\  |_)   woof \n"
                 "      /  \\y'   ⸯ  \n"
                 "  ⸯ  /     \\ ⸯ    \n"
                 "_   /  `   |      \n"
                 "\\\\/  \\  | _\\      \n"
                 " \\   /_ || \\_    \n"
                 "  \\____)|_) \\_)   \n"
              << COLOR_RESET << std::endl;
  } else {
    std::cout << COLOR_BLUE
              << "  ˚     /  \\      \n"
                 "   ⟡   / ..|\\  ˚    woof  \n"
                 "      (_\\  |_)    \n"
                 " ˚    /  \\y'  ⟡   \n"
                 "  ⟡  /     \\   ⟡  \n"
                 "_   /  `   |      \n"
                 "\\\\/  \\  | _\\˚     \n"
                 " \\   /_ || \\_    \n"
                 "  \\____)|_) \\_)   \n"
              << COLOR_RESET << std::endl;
  }

  frameToggle = !frameToggle; // toggles frames
}

void dogSleeping() {
  static bool frameToggle = true;
  if (frameToggle) {
    // Displaying dog ASCII art!
    std::cout << COLOR_DARK_GREY << COLOR_BOLD
              << "          _                 \n"
                 "        /   \\   Z      \n"
                 "       / _ _|\\ Z                  \n"
                 "      (_\\   |_)         _   \n"
                 "      |  \\y'------___  | |   \n"
                 "      |             `--' |    \n"
                 " ___/__      ___/  |___.'     \n"
                 "(_/(____/___(_____/           "
              << COLOR_RESET << std::endl;
  } else {
    std::cout << COLOR_BOLD
              << "          _      Z         \n"
                 "        /   \\   Z      \n"
                 "       / _ _|\\             \n"
                 "      (_\\   |_)         _   \n"
                 "      |  \\y'------___  | |   \n"
                 "      |             `--' |    \n"
                 " ___/__      ___/  |___.'     \n"
                 "(_/(____/___(_____/           "
              << COLOR_RESET << std::endl;
  }

  frameToggle = !frameToggle; // toggles frames
}
void dogDied() {
  static bool frameToggle = true;
  if (frameToggle) {
    // Displaying dog ASCII art!
    std::cout << COLOR_RED
              << "          _                 \n"
                 "        /   \\         \n"
                 "       / x x|\\                   \n"
                 "      (_\\   |_)         _   \n"
                 "      |  \\y'------___  | |   \n"
                 "      |             `--' |    \n"
                 " ___/__      ___/  |___.'     \n"
                 "(_/(____/___(_____/           \n"
              << COLOR_RESET << std::endl;
  } else {
    std::cout << COLOR_BOLD
              << "          _               \n"
                 "        /   \\         \n"
                 "       / x x|\\             \n"
                 "      (_\\   |_)         _   \n"
                 "      |  \\y'------___  | |   \n"
                 "      |             `--' |    \n"
                 " ___/__      ___/  |___.'     \n"
                 "(_/(____/___(_____/           \n"
              << COLOR_RESET << std::endl;
  }

  frameToggle = !frameToggle; // toggles frames
}
void dogClearScreen() { std::cout << "\033[2J\033[H"; }

void dogDisplayNormal(int numFrames, int frameDelay) {
  for (int i = 0; i < numFrames; ++i) {
    dogClearScreen();
    dogNormal();
    std::cout << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(frameDelay));
  };
}

void dogDisplayEating(int numFrames, int frameDelay) {
  for (int i = 0; i < numFrames; ++i) {
    dogClearScreen();
    dogEating();
    std::cout << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(frameDelay));
  };
}

void dogDisplayCleaning(int numFrames, int frameDelay) {
  for (int i = 0; i < numFrames; ++i) {
    dogClearScreen();
    dogCleaning();
    std::cout << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(frameDelay));
  }
}
void dogDisplaySleeping(int numFrames, int frameDelay) {
  for (int i = 0; i < numFrames; ++i) {
    dogClearScreen();
    dogSleeping();
    std::cout << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(frameDelay));
  };
}

void dogDisplayDied(int numFrames, int frameDelay) {
  for (int i = 0; i < numFrames; ++i) {
    dogClearScreen();
    dogDied();
    std::cout << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(frameDelay));
  };
}

// // DOG TEST SPRITES
// int main() {

//   dogDisplayNormal();
//   dogDisplayEating();
//   dogDisplayCleaning();
//   dogDisplaySleeping();
//   dogDisplayDied();

//   return 0;
// }