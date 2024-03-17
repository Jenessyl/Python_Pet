/**
 * Project III: Start here.
 */
#include <string>
// #include "colors.h"
#include <iostream>
#include <string>

#define COLOR_BROWN "\e[38;5;130m"
#define COLOR_RED "\033[31m"
#define COLOR_YELLOW "\033[93m"
#define COLOR_GREEN "\033[32m"
#define COLOR_BLUE "\033[94m"
#define COLOR_CYAN "\e[0;36m"
#define COLOR_WHITE "\033[0m"

#define H COLOR_BROWN
#define R COLOR_RED
#define Y COLOR_YELLOW
#define G COLOR_GREEN
#define B COLOR_BLUE
#define C COLOR_CYAN
#define W COLOR_WHITE

// takes text and desired color (R,Y,G,B) as arguments and outputs colored text
// (Input text will have an endl attached once printed)
void color_text(std::string my_text, char my_color) {
  std::string colored_string, colored_set;

  switch (my_color) {
  case 'R':
    colored_set = R; // Sets text to red
    std::cout << colored_set;
    std::cout << my_text << std::endl;
    break;

  case 'Y':
    colored_set = Y; // Sets text to yellow
    std::cout << colored_set;
    std::cout << my_text << std::endl;
    break;

  case 'G':
    colored_set = G; // Sets text to green
    std::cout << colored_set;
    std::cout << my_text << std::endl;
    break;

  case 'B':
    colored_set = B; // Sets text to blue
    std::cout << colored_set;
    std::cout << my_text << std::endl;
    break;

  case 'C':
    colored_set = C; // Sets text to cyan
    std::cout << colored_set;
    std::cout << my_text << std::endl;
    break;

  case 'H':
    colored_set = H; // Sets text to hazel
    std::cout << colored_set;
    std::cout << my_text << std::endl;
    break;  
  }

  colored_string = W;
  std::cout << colored_string;
}

//This function will play if the player gets the affection bar to 100 (Wins)
void displayWin(std::string petName) {
    std::cout << "============================" << std::endl;
    std::cout << "Congratulations!\n" << "You have reached a max level of affection with " << petName << "." << std::endl;
    std::cout << petName << " wishes you the best in life and will never forget you." << std::endl;
    //put sprite

    std::cout << "============================" << std::endl;
    std::cout << "✿ Thank you for playing ✿" << std::endl;
}

