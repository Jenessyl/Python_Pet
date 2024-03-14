#pragma once

#include <iostream>
#include <string>
#include <cstdlib>
#include "../lisbette/bars.h"

class Pet {
protected:
  std::string petType;

public:
  Pet(const std::string &type) : petType(type) {}

  std::string displayPet() const { return petType; }
  virtual void displayAsciiArt() const = 0;
  virtual void interact() const = 0;
  virtual void feed(Bars& bars) const = 0;
};





