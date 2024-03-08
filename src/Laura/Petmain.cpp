#include "Pet.h"
#include <iostream>
#include <string>

int main() {
  std::cout << "Choose a pet:" << std::endl;
  std::cout << "a) Cat\nb) Dog\nc) Frog\n\n";

  char choices;
  std::cin >> choices;

  Pet *myPet = nullptr;

  switch (choices) {
  case 'a':
    myPet = new Cat();
    break;
  case 'b':
    myPet = new Dog();
    break;
  case 'c':
    myPet = new Frog();
    break;
  default:
    std::cout << "Invalid Choice" << std::endl;
    return 1;
  }

  if (myPet) {
    myPet->displayAsciiArt();
    std::cout << std::endl;

    myPet->interact();

    std::string userChoice;
    std::cin >> userChoice;

    if (userChoice == "yes") {
      myPet->feed();
    } else {
      std::cout << "You chose not to feed your pet." << std::endl;
    }

    delete myPet;
  }

  return 0;
}
