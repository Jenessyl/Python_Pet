#include "bars.h"
#include "library.h"
#include <chrono>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <ostream>
#include <string>
#include <thread>

void sleep(std::string pet, Bars &petBars) {
  color_text("〰〰〰〰〰〰〰〰〰〰〰〰〰〰〰〰〰〰〰〰〰〰〰〰〰〰〰〰〰", 'C');
  color_text("\n   ᶻ 𝗓 𐰁  Goodnight! IT IS TIME FOR BED! ᶻ 𝗓 𐰁    \n", 'B');
  color_text("〰〰〰〰〰〰〰〰〰〰〰〰〰〰〰〰〰〰〰〰〰〰〰〰〰〰〰〰〰", 'C');

  //   include the sleeping sprite, sleep progress can be replaced by sprites

  int sleepProgress = 0;
  while (sleepProgress < 100) {
    std::this_thread::sleep_for(std::chrono::milliseconds(100));
    sleepProgress += 25;
    std::cout << "Sleeping... Progress: " << sleepProgress << "%" << std::endl;
  }

  // chooses a random integer from 1-4 that corresponds to sleep activity
  int randomNumber;
  srand(time(NULL));
  randomNumber = (rand() % 5);

  switch (randomNumber) {
  case 0:
    std::cout
        << "\n"
        << pet
        << " had a great night of sleep!\n====================================="
        << std::endl;
    petBars.increaseHealthPoints(5);
    petBars.increaseSleepPoints(25);

    color_text("Health +5", 'G');
    color_text("Sleep +25", 'G');

    break;
  case 1:
    std::cout << "\n"
              << pet
              << " is feeling well rested!\n============================="
              << std::endl;
    petBars.increaseHealthPoints(5);
    petBars.increaseSleepPoints(10);
    color_text("Health +5", 'G');
    color_text("Sleep +25", 'G');

    break;
  case 2:
    std::cout
        << "\n"
        << pet
        << "'s sleep was not very restful. Oh no!\n============================"
        << std::endl;
    petBars.decreaseSleepPoints(10);
    color_text("Sleep +5", 'G');
    break;
  case 3:
    std::cout << "\n"
              << pet
              << " was tossing & turning all "
                 "night.\n===================================="
              << std::endl;
    petBars.decreaseSleepPoints(10);
    color_text("Sleep -10", 'R');
    break;
  }

  // increase sleep points regardless of scenario
  std::cout << std::endl;
  petBars.increaseHappinessPoints(5);
  color_text("❥ " + pet + " thanks you for putting it to bed ❥", 'C');
  color_text("Happiness +5", 'G');
  std::cout << std::endl;
}

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

// 3,1,2,0 is the order is the order it follows with  srand(time(NULL)) (27)
// commented out; when in use it is truly random

//   return 0;
// }
