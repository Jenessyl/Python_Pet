#pragma once

#include <iostream>
#include <string>

class Pet {
protected:
    std::string petType;

public:
    Pet(const std::string& type) : petType(type) {}

    void displayPet() const {
        std::cout << "" << petType << std::endl;
    }
    virtual void displayAsciiArt() const = 0;
    virtual void interact() const = 0;
    virtual void feed() const = 0;
   
};

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

    void interact() const override {
        std::cout << "You picked a cat! Would you like to feed your pet? (yes/no): ";
    }

    void feed() const override {
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

    void interact() const override {
        std::cout << "You picked a dog! Would you like to feed your pet? (yes/no): ";
    }

    void feed() const override {
        std::cout << "You gave your dog a bone!" << std::endl;      //"They dug it into the ground :("
    }
};

class Frog : public Pet {
public: 
    Frog() : Pet("Frog") {}

    void displayAsciiArt() const override {
        //Frog art!!
        std::cout << "         _   _    ribbit ribbit   \n"
                     "        (.)_(.)       \n"
                     "     _ (   _   ) _    \n"
                     "    / \\/`-----'\\/ \\   \n"
                     "  __\\ ( (     ) ) /__ \n"
                     "  )   /\\ \\._./ /\\   ( \n"
                     "   )_/ /|\\   /|\\ \\_(    ";
    }

    void interact() const override {
        std::cout << "You picked a frog! Would you like to feed your pet? (yes/no): ";
    }

    void feed() const override {
        std::cout << "You fed the frog a plate of instects!" << std::endl;
    } 
};

