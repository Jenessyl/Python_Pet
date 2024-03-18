#include "bars.h"
#include <iostream>

// constructor that initializes the bars to the starting amount of points
Bars::Bars(int health, int happiness, int hunger, int sleep, int hygiene) {
  this->health = health;
  this->happiness = happiness;
  this->hunger = hunger;
  this->sleep = sleep;
  this->hygiene = hygiene;
}

void Bars::setHealth(int health) { this->health = health; }
void Bars::setHappiness(int happiness) { this->happiness = happiness; }
void Bars::setHunger(int hunger) { this->hunger = hunger; }
void Bars::setSleep(int sleep) { this->sleep = sleep; }
void Bars::setHygiene(int hygiene) { this->hygiene = hygiene; }

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
  std::cout << "Happiness: " << happiness << std::endl
            << "Health: " << health << std::endl
            << "Hunger: " << hunger << std::endl
            << "Sleep: " << sleep << std::endl
            << "Hygiene: " << hygiene << std::endl;
}

void Bars::decreaseHealthPoints(int amount) {
  health -= amount;
  if (health <= 0) {
    health = 0;
  }
}

void Bars::increaseHealthPoints(int amount) {
  health += amount;
  if (health >= MAX) {
    health = MAX;
  }
}

void Bars::decreaseHappinessPoints(int amount) {
  happiness -= amount;
  if (happiness <= 0) {
    happiness = 0;
  }
}

void Bars::increaseHappinessPoints(int amount) {
  happiness += amount;
  if (happiness >= MAX) {
    happiness = MAX;
  }
}

void Bars::decreaseHungerPoints(int amount) {
  hunger -= amount;
  if (hunger <= 0) {
    hunger = 0;
  }
}

void Bars::increaseHungerPoints(int amount) {
  hunger += amount;
  if (hunger >= MAX) {
    hunger = MAX;
  }
}

void Bars::decreaseSleepPoints(int amount) {
  sleep -= amount;
  if (sleep <= 0) {
    sleep = 0;
  }
}

void Bars::increaseSleepPoints(int amount) {
  sleep += amount;
  if (sleep >= MAX) {
    sleep = MAX;
  }
}

void Bars::decreaseHygienePoints(int amount) {
  hygiene -= amount;
  if (hygiene <= 0) {
    hygiene = 0;
  }
}

void Bars::increaseHygienePoints(int amount) {
  hygiene += amount;
  if (hygiene >= MAX) {
    hygiene = MAX;
  }
}

// int main() {
//     // Create an instance of the Bars class
//     Bars petBars;

//     // Test setting and getting values
//     petBars.setHealth(90);
//     std::cout << "Health: " << petBars.getHealth() << std::endl;

//     // Test increasing and decreasing all points
//     petBars.decreasePoints(10);
//     std::cout << "Points after decrease: " << std::endl;
//     petBars.barStatus();

//     petBars.increasePoints(15);
//     std::cout << "Increased points: " << std::endl;
//     petBars.barStatus();

//     // Test specific attribute functions
//     petBars.decreaseHealthPoints(20);
//     std::cout << "Decreased health points: " << std::endl;
//     petBars.barStatus();

//     petBars.increaseHappinessPoints(10);
//     std::cout << "Increased happiness points: " << std::endl;
//     petBars.barStatus();

//     return 0;
// }
