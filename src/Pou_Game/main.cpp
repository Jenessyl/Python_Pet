/**
 * Project III: Start here.
 */
#include <iostream>
#include <string>
#include "game_loop.h"
#include "library.h"

//IMPORTANT: run "g++ *.cpp -o main" then "./main" to play

int main() {
  // Print the menu for pet selection
  char petChoice;
  std::string petName;
  bool intro_flag = true;
  
  //title 
  color_text( "======================================\n          ❥ Welcome "
            "to My Pet! ❥\n======================================\n", 'B');

  //pet and name selection
  do {
    color_text("Choose your pet:", 'Y');
              std::cout <<"a) Dog" << std::endl
              << "b) Cat" << std::endl
              << "c) Frog\n"
              << std::endl
              << "Pet Choice: ";

    std::cin >> petChoice;
    if ((petChoice != 'a') && (petChoice != 'b') && (petChoice != 'c')) {
        color_text("INVALID ENTRY: VALID INPUTS INCLUDE \"a\", \"b\", or \"c\"", 'R');
        std::cout << std::endl;
    }

    switch (petChoice) {
    case 'a':
      color_text("Enter the name of your pet: ", 'Y');
      std::cin >> petName;
      // Bars dogBar;
      // dogBar.barStatus();
      // create obj
      intro_flag = false;
      break;

    case 'b':
      color_text("Enter the name of your pet: ", 'Y');
      std::cin >> petName;
      intro_flag = false;
      break;

    case 'c':
      color_text("Enter the name of your pet: ", 'Y');
      std::cin >> petName;
      intro_flag = false;
      break;

    default:
      break;
    }
  } while (intro_flag == true);
  
  std::cout << std::endl;
  game_loop(petName);
}
