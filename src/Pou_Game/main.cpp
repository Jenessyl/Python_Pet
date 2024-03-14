/**
 * Project III: Start here.
 */

#include "library.cpp"
#include <iostream>
#include <string>

int main() {
  // Print the menu for pet selection
  char petChoice;
  std::string petName;

  do {
    color_text( "======================================\n          ❥ Welcome "
                 "to My Pet! ❥\n======================================\n", 'H');

    std::cout << "Choose your pet:" << std::endl
              << "a) Dog" << std::endl
              << "b) Cat" << std::endl
              << "c) Frog\n"
              << std::endl
              << "Pet Choice: ";

    std::cin >> petChoice;
    petChoice = tolower(petChoice);

    switch (petChoice) {
    case 'a':
      std::cout << "Enter the name of your pet: ";
      std::cin >> petName;
      // Bars dogBar;
      // dogBar.barStatus();
      // create obj
      break;

    case 'b':
      std::cout << "Enter the name of your pet: ";
      std::cin >> petName;
      break;

    case 'c':
      std::cout << "Enter the name of your pet: ";
      std::cin >> petName;
      break;
    }

  } while ((petChoice == 'a') || (petChoice == 'b') || (petChoice == 'c'));

  std::cout
            << "INVALID ENTRY: VALID INPUTS INCLUDE \"a\", \"b\", or \"c\""
            << std::endl;
  std::cin >> petChoice;
}
