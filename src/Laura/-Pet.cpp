#include "-Pet.h"
#include <iostream>

// here is where each pet type class is made, cat, dog, and frog.

class Cat : public Pet {
public:
  Cat() : Pet("Cat") {}

  void displayAsciiArt() const override {
    // Displaying cat ASCII art!
    std::cout << "    /\\_____/\\   \n"
                 "   /  o   o  \\   meow meow \n"
                 "  ( ==  ^  == )\n"
                 "   )         (\n"
                 "  (           ) \n"
                 " ( (  )   (  ) ) \n"
                 "(__(__)___(__)__) \n";
  }

  // void interact() const override {            //used once the
  // sprite/interaction of pet are made
  //   std::cout
  //       << "You picked a cat! Would you like to play with your pet? (yes/no):
  //       ";
  // }

  void feed(Bars &bars) const override {
    std::cout << "You fed your cat a bowl of fish." << std::endl;
  }
};