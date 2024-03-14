#pragma once

#include <cstdlib>
#include <iostream>
#include <string>
<<<<<<< HEAD
=======
#include "../lisbette/bars.h"
#include <cstdlib>
    >>>>>>> 5e711677cbf1738b5aff6bd90e5e18c4239c8607

    class Pet {
protected:
  std::string petType;

public:
  Pet(const std::string &type) : petType(type) {}

  std::string displayPet() const { return petType; }
  virtual void displayAsciiArt() const = 0;
  virtual void interact() const = 0;
  virtual void feed(Bars &bars) const = 0;
};

<<<<<<< HEAD
class Dog : public Pet {
public:
  Dog() : Pet("Dog") {}
=======


>>>>>>> 5e711677cbf1738b5aff6bd90e5e18c4239c8607
