#include "sleep.h"
#include "bars.h"
#include "library.h"

#include <ctime>
#include <iostream>
#include <string>

void sleep(std::string pet, Bars &petBars, char animal) {

  switch (animal) {
  case 'a':
    dogDisplaySleeping();
    break;
  case 'b':
    catDisplaySleeping();
    break;
  case 'c':
    frogDisplaySleeping();
    break;
  }

  color_text("〰〰〰〰〰〰〰〰〰〰〰〰〰〰〰〰〰", 'C');
  color_text("🌙  GOODNIGHT! TIME FOR BED! 🌙", 'B');
  color_text("〰〰〰〰〰〰〰〰〰〰〰〰〰〰〰〰〰", 'C');

  // chooses a random integer from 1-4 that corresponds to sleep activity
  int randomNumber;
  randomNumber = (rand() % 5);

  switch (randomNumber) {
  case 0:
    std::cout << pet << " had a great night of sleep!" << std::endl;
    petBars.increaseHealthPoints(15);
    petBars.increaseSleepPoints(25);
    petBars.decreaseHungerPoints(10);
    petBars.decreaseHygienePoints(5);

    color_text("Health +5", 'G');
    color_text("Sleep +25", 'G');
    color_text("Hunger -10", 'R');
    color_text("Hygiene -5", 'R');

    break;
  case 1:
    std::cout << pet << " is feeling well rested!" << std::endl;
    petBars.increaseHealthPoints(30);
    petBars.increaseSleepPoints(10);
    petBars.decreaseHungerPoints(10);
    petBars.decreaseHygienePoints(5);
    color_text("Health +5", 'G');
    color_text("Sleep +10", 'G');
    color_text("Hunger -10", 'R');
    color_text("Hygiene -5", 'R');

    break;
  case 2:
    std::cout << pet << "'s sleep was not very restful." << std::endl;
    petBars.increaseHealthPoints(10);
    petBars.increaseSleepPoints(10);
    petBars.decreaseHungerPoints(15);
    petBars.decreaseHygienePoints(5);
    color_text("Sleep +10", 'G');
    color_text("Hunger -15", 'R');
    color_text("Hygiene -5", 'R');
    break;
  case 3:
    std::cout << pet
              << " was tossing & turning all "
                 "night."
              << std::endl;
    petBars.increaseSleepPoints(5);
    petBars.decreaseHungerPoints(20);
    petBars.decreaseHungerPoints(10);
    color_text("Sleep +5", 'G');
    color_text("Hunger -20", 'R');
    color_text("Hygiene -10", 'R');
    break;
  }

  // increase sleep points regardless of scenario
  std::cout << std::endl;
  petBars.increaseHappinessPoints(5);
  color_text("❥ " + pet + " thanks you for putting it to bed ❥", 'C');
  color_text("Happiness +5", 'G');
  std::cout << std::endl;
}

// Sleeping cenario testing
// int main() {
//   std::string name1 = "POU";
//   Bars bar1;
//   sleep(name1, bar1);
//   std::cout << "\nAfter sleeping, " << name1 << "'s current status:\n";
//   bar1.barStatus();
// }
//   std::string name2 = "Sally";
//   Bars bar2;
//   sleep(name2, bar2);
//   std::cout << "\nAfter sleeping, " << name2 << "'s current status:\n";
//   bar2.barStatus();

//   std::string name3 = "adsd";
//   Bars bar3;
//   sleep(name3, bar3);
//   std::cout << "\nAfter sleeping, " << name3 << "'s current status:\n";
//   bar3.barStatus();

//   std::string name4 = "SDASDSADS";
//   Bars bar4;
//   sleep(name4, bar4);
//   std::cout << "\nAfter sleeping, " << name4 << "'s current status:\n";
//   bar4.barStatus();

//   std::string name5 = "fifth";
//   Bars bar5;
//   sleep(name5, bar5);
//   std::cout << "\nAfter sleeping, " << name5 << "'s current status:\n";
//   bar5.barStatus();

//   return 0;
// }
