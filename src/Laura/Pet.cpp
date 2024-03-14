#include "Pet.h"
#include <iostream>

//here is where each pet type class is made, cat, dog, and frog.

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

  //void interact() const override {            //used once the sprite/interaction of pet are made
  //  std::cout
  //      << "You picked a cat! Would you like to play with your pet? (yes/no): ";
  //}

  void feed(Bars& bars) const override {
    std::cout << "You fed your cat a bowl of fish." << std::endl;
  }
};

class Dog : public Pet {
public:
  Dog() : Pet("Dog") {}

  void displayAsciiArt() const override {
    // Dog art!
    std::cout << "        /  \\      \n"
                 "       / ..|\\   woof woof  \n"
                 "      (_\\  |_)    \n"
                 "      /  \\@'      \n"
                 "     /     \\      \n"
                 " _  /  `   |      \n"
                 "\\\\/  \\  | _\\      \n"
                 " \\   /_ || \\_    \n"
                 "  \\____)|_) \\_)   \n";
  }

  //void interact() const override {
  //  std::cout
  //      << "You picked a dog! Would you like to feed your pet? (yes/no): ";
  //}

  void feed(Bars& bars) const override {
    std::cout << "You gave your dog a bone!"
              << std::endl; //"They dug it into the ground :("
  }
};

class Frog : public Pet {
public:
  Frog() : Pet("Frog") {}

  void displayAsciiArt() const override {
    // Frog art!!
    std::cout << "         _   _    ribbit ribbit   \n"
                 "        (.)_(.)       \n"
                 "     _ (   _   ) _    \n"
                 "    / \\/`-----'\\/ \\   \n"
                 "  __\\ ( (     ) ) /__ \n"
                 "  )   /\\ \\._./ /\\   ( \n"
                 "   )_/ /|\\   /|\\ \\_(    ";
  }

  //void interact() const override {
  //  std::cout
  //      << "You picked a frog! Would you like to feed your pet? (yes/no): ";
  //}

  void feed(Bars& bars) const override {
    std::cout << "You fed the frog a plate of instects!" << std::endl;
  }
};

