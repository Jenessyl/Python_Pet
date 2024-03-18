/**
 * Project III: Start here.
 */
#include "game_loop.h"
#include "library.h"
#include <iostream>
#include <string>

// IMPORTANT: run "g++ *.cpp -o main" then "./main" to play

int main() {
  // Print the menu for pet selection
  char petChoice;
  char petType;
  std::string petName;
  bool intro_flag = true;

  // title
  color_text("======================================\n          ❥ Welcome "
             "to My Pet! ❥\n======================================\n",
             'B');

  // pet and name selection
  do {
    color_text("Choose your pet:", 'Y');
    std::cout << "a) Dog" << std::endl
              << "b) Cat" << std::endl
              << "c) Frog\n"
              << std::endl
              << "Pet Choice: ";

    std::cin >> petChoice;
    if ((petChoice != 'a') && (petChoice != 'b') && (petChoice != 'c')) {
      color_text("INVALID ENTRY: VALID INPUTS INCLUDE \"a\", \"b\", or \"c\"",
                 'R');
      std::cout << std::endl;
    }

    switch (petChoice) {
    case 'a':
      color_text("Enter the name of your pet: ", 'Y');
      std::cin >> petName;
      petType = 'a';
      intro_flag = false;
      break;

    case 'b':
      color_text("Enter the name of your pet: ", 'Y');
      std::cin >> petName;
      petType = 'b';
      intro_flag = false;
      break;

    case 'c':
      color_text("Enter the name of your pet: ", 'Y');
      std::cin >> petName;
      petType = 'c';
      intro_flag = false;
      break;

    default:
      break;
    }
  } while (intro_flag == true);

  switch (petType) {
  case 'a':
    dogDisplayNormal();
    break;
  case 'b':
    catDisplayNormal();
    break;
  case 'c':
    frogDisplayNormal();
    break;
  }

  std::cout << std::endl;
  game_loop(petName, petType);
}
