#include "bars.h"
#include <iostream>
#include <iostream>

Bars::Bars(int health, int happiness, int hunger, int sleep, int hygiene){
    this->health = health;
    this->happiness = happiness;
    this->hunger = hunger;
    this->sleep = sleep;
    this->hygiene = hygiene;
}

// returns an int representation of health bar level
int Bars::getHealth() {
  return health;
}

// returns an int representation of happiness bar level
int Bars::getHappiness() {
  return happiness;
}

// returns an int representation of hunger bar level
int Bars::getHunger() {
  return hunger;
}

// returns an int representation of sleep bar level
int Bars::getSleep() {
  return sleep;
}

// returns an int representation of clean bar level
int Bars::getHygiene() {
  return hygiene;
}

// decrease health bar by however many points
void Bars::decreaseHealthPoints() {
    health -= 5;
}

void Bars::barStatus() {
  std::cout << "Health: " << health << std::endl
            << "Happiness: " << happiness << std::endl
            << "Hunger: " << hunger << std::endl
            << "Sleep: " << sleep << std::endl
            << "Hygiene: " << hygiene << std::endl;
}