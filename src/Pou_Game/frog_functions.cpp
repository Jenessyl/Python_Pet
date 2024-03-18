#include "frog_functions.h"
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

// Frog Sprites
void frogNormal() {
  static bool frameToggle = true;
  if (frameToggle) {
    // Displaying frog ASCII art!
    std::cout << COLOR_LIGHT_PINK << COLOR_BOLD
              << "         _   _           \n"
                 "        (.)_(.)   ribbit    \n"
                 "     _ (   _   ) _    \n"
                 "    / \\/`-----'\\/ \\   \n"
                 "  __\\ ( (     ) ) /__ \n"
                 "  )   /\\ \\._./ /\\   ( \n"
                 "   )_/ /|\\   /|\\ \\_(    "
              << COLOR_RESET << std::endl;
  } else {
    std::cout << COLOR_PINK << COLOR_BOLD
              << "         _   _     ribbit   \n"
                 "        (.)_(.)       \n"
                 "     _ (   _   ) _    \n"
                 "    / \\/`-----'\\/ \\   \n"
                 "  __\\ ( (     ) ) /__ \n"
                 "  )   /\\ \\._./ /\\   ( \n"
                 "   )_/ /|\\   /|\\ \\_(    "
              << COLOR_RESET << std::endl;
  }

  frameToggle = !frameToggle; // toggles frames
}
void frogEating() {
  static bool frameToggle = true;
  if (frameToggle) {
    // Displaying frog ASCII art!
    std::cout << COLOR_BROWN << COLOR_BOLD
              << "         _   _   munch    \n"
                 "        (.)_(.)       \n"
                 "     _ (   _   ) _    \n"
                 "    / \\/`-----'\\/ \\   \n"
                 "  __\\ ( (     ) ) /__ \n"
                 "  )   /\\ \\._./ /\\   ( \n"
                 "   )_/ /|\\   /|\\ \\_(    "
              << COLOR_RESET << std::endl;
  } else {
    std::cout << COLOR_BOLD
              << "         _   _         munch   \n"
                 "        (.)_(.)       \n"
                 "     _ (   o   ) _    \n"
                 "    / \\/`-----'\\/ \\   \n"
                 "  __\\ ( (     ) ) /__ \n"
                 "  )   /\\ \\._./ /\\   ( \n"
                 "   )_/ /|\\   /|\\ \\_(    "
              << COLOR_RESET << std::endl;
  }

  frameToggle = !frameToggle; // toggles frames
}
void frogCleaning() {
  static bool frameToggle = true;
  if (frameToggle) {
    // Displaying frog ASCII art!
    std::cout << COLOR_BROWN << COLOR_BOLD
              << "ⸯ       ⸯ _   _    ⸯ    \n"
                 " ⸯ    ⸯ  (-)_(-)  ribbit  ⸯ     \n"
                 "ⸯ   ⸯ _ (   _   ) _    \n"
                 "    / \\/`-----'\\/ \\   \n"
                 "  __\\ ( (     ) ) /__ \n"
                 "  )   /\\ \\._./ /\\   ( \n"
                 "   )_/ /|\\   /|\\ \\_(    "
              << COLOR_RESET << std::endl;
  } else {
    std::cout << COLOR_BLUE << COLOR_BOLD
              << "    ⟡  ˚ _   _     ribbit       \n"
                 "        (.)_(.)   ⟡    ˚ \n"
                 "  ⟡  _ (   _   ) _    \n"
                 "    / \\/`-----'\\/ \\⟡   \n"
                 "˚ __\\ ( (     ) ) /__ \n"
                 "  )   /\\ \\._./ /\\   ( \n"
                 "   )_/ /|\\   /|\\ \\_(    " COLOR_RESET
              << std::endl;
  }

  frameToggle = !frameToggle; // toggles frames
}
void frogSleeping() {
  static bool frameToggle = true;
  if (frameToggle) {
    // Displaying frog ASCII art!
    std::cout << COLOR_DARK_GREY << COLOR_BOLD
              << "         _   _   Z     \n"
                 "        (-)_(-) Z       \n"
                 "     _ (   _   ) _    \n"
                 "    / \\/`-----'\\/ \\   \n"
                 "  __\\ ( (     ) ) /__ \n"
                 "  )   /\\ \\._./ /\\   ( \n"
                 "   )_/ /|\\   /|\\ \\_(    "
              << COLOR_RESET << std::endl;
  } else {
    std::cout << COLOR_BOLD
              << "         _   _ z           \n"
                 "        (-)_(-) z      \n"
                 "     _ (   _   ) _    \n"
                 "    / \\/`-----'\\/ \\   \n"
                 "  __\\ ( (     ) ) /__ \n"
                 "  )   /\\ \\._./ /\\   ( \n"
                 "   )_/ /|\\   /|\\ \\_(    "
              << COLOR_RESET << std::endl;
  }

  frameToggle = !frameToggle; // toggles frames
}
void frogDied() {
  static bool frameToggle = true;
  if (frameToggle) {
    // Displaying frog ASCII art!
    std::cout << COLOR_RED
              << "         _   _           \n"
                 "        (x)_(x)       \n"
                 "     _ (   _   ) _    \n"
                 "    / \\/`-----'\\/ \\   \n"
                 "  __\\ ( (     ) ) /__ \n"
                 "  )   /\\ \\._./ /\\   ( \n"
                 "   )_/ /|\\   /|\\ \\_(    "
              << COLOR_RESET << std::endl;
  } else {
    std::cout << COLOR_BOLD
              << "         _   _       \n"
                 "        (x)_(x)       \n"
                 "     _ (   _   ) _    \n"
                 "    / \\/`-----'\\/ \\   \n"
                 "  __\\ ( (     ) ) /__ \n"
                 "  )   /\\ \\._./ /\\   ( \n"
                 "   )_/ /|\\   /|\\ \\_(    "
              << COLOR_RESET << std::endl;
  }

  frameToggle = !frameToggle; // toggles frames
}
void frogClearScreen() { std::cout << "\033[2J\033[H"; }

void frogDisplayNormal(int numFrames, int frameDelay) {
  for (int i = 0; i < numFrames; ++i) {
    frogClearScreen();
    frogNormal();
    std::cout << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(frameDelay));
  };
}

void frogDisplayEating(int numFrames, int frameDelay) {
  for (int i = 0; i < numFrames; ++i) {
    frogClearScreen();
    frogEating();
    std::cout << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(frameDelay));
  };
}

void frogDisplayCleaning(int numFrames, int frameDelay) {
  for (int i = 0; i < numFrames; ++i) {
    frogClearScreen();
    frogCleaning();
    std::cout << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(frameDelay));
  }
}
void frogDisplaySleeping(int numFrames, int frameDelay) {
  for (int i = 0; i < numFrames; ++i) {
    frogClearScreen();
    frogSleeping();
    std::cout << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(frameDelay));
  };
}

void frogDisplayDied(int numFrames, int frameDelay) {
  for (int i = 0; i < numFrames; ++i) {
    frogClearScreen();
    frogDied();
    std::cout << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(frameDelay));
  };
}
