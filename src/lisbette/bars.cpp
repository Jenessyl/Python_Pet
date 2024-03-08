#include "bars.h"
#include <iostream>

Bars::Bars(int health, int happiness, int hunger, int sleep, int hygiene) {
  this->health = health;
  this->happiness = happiness;
  this->hunger = hunger;
  this->sleep = sleep;
  this->hygiene = hygiene;
}

// returns an int representation of health bar level
int Bars::getHealth() { return health; }

// returns an int representation of happiness bar level
int Bars::getHappiness() { return happiness; }

// returns an int representation of hunger bar level
int Bars::getHunger() { return hunger; }

// returns an int representation of sleep bar level
int Bars::getSleep() { return sleep; }

// returns an int representation of clean bar level
int Bars::getHygiene() { return hygiene; }

// decrease points for all the bars at once, only if they are above 0
void Bars::decreasePoints(int amount) {

  health -= amount;
  happiness -= amount;
  hunger -= amount;
  sleep -= amount;
  hygiene -= amount;

  if (health <= 0) {
    health = 0;
  }
  if (happiness <= 0) {
    happiness = 0;
  }
  if (hunger <= 0) {
    hunger = 0;
  }
  if (sleep <= 0) {
    sleep = 0;
  }
  if (hygiene <= 0) {
    hygiene = 0;
  }
}

// increase points for all the bars at once, only if they are below the MAX
// amount of points possible
void Bars::increasePoints(int amount) {
  health += 5;
  happiness += 5;
  hunger += 5;
  sleep += 5;
  hygiene += 5;

  if (health >= MAX) {
    health = MAX;
  }
  if (happiness >= MAX) {
    happiness = MAX;
  }
  if (hunger >= MAX) {
    hunger = MAX;
  }
  if (sleep >= MAX) {
    sleep = MAX;
  }
  if (hygiene >= MAX) {
    hygiene = MAX;
  }
}

// reports the current status of each bar
void Bars::barStatus() {
  std::cout << "Health: " << health << std::endl
            << "Happiness: " << happiness << std::endl
            << "Hunger: " << hunger << std::endl
            << "Sleep: " << sleep << std::endl
            << "Hygiene: " << hygiene << std::endl;
}