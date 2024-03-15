#include "sleep.h"
#include <chrono>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <ostream>
#include <thread>

// Puts the pet to sleep and provides updates while the pet sleeps. parameter
// should be pet object, for now its a string

void sleep(std::string pet) {
  std::cout << "\nGoodnight! " << pet << " is going to bed.\n" << std::endl;

  //   include the sleeping sprite

  int sleepProgress = 0;
  while (sleepProgress < 100) {
    std::this_thread::sleep_for(std::chrono::milliseconds(100));
    sleepProgress += 25;
    std::cout << "Sleeping... Progress: " << sleepProgress << "%" << std::endl;
  }
  std::cout << "\n" << pet << " is awake!" << std::endl;

  // chooses a random integer from 1-4 that corresponds to sleep activity
  int randomNumber;
  srand(time(NULL));
  randomNumber = (rand() % 5);

  switch (randomNumber) {
  case 0:
    std::cout
        << "\n"
        << pet
        << " had a great night of sleep.\n====================================="
        << std::endl;
    // adjust bars
    break;
  case 1:
    std::cout << "\n"
              << pet
              << " is feeling well rested.\n============================="
              << std::endl;
    // adjust bars
    break;
  case 2:
    std::cout << "\n"
              << pet << " is feeling sick. Oh no!\n============================"
              << std::endl;
    // adjust bars
    break;
  case 3:
    std::cout << "\n"
              << pet
              << " was tossing & turning all "
                 "night.\n===================================="
              << std::endl;
    // adjust bars
    break;
  }
}

// random chance scenario >> increase affection or decrease health
// 3 random chance scenarios using random

// Your pet had a great night of sleep.
// Your pet is feeling well rested.
// Your pet woke up feeling sick. Oh no!
// Your pet was tossing & turning all night.

// lower daily counter

// increase/decrease energy bar

// increase affection

int main() {
  std::string name1 = "POU";
  sleep(name1);

  std::string name2 = "Sally";
  sleep(name2);

  std::string name3 = "adsd";
  sleep(name3);

  std::string name4 = "SDASDSADS";
  sleep(name4);

  std::string name5 = "fifth";
  sleep(name5);

  // 3,1,2,0 is the order is the order it follows with  srand(time(NULL)) (27)
  // commented out; when in use it is truly random

  return 0;
}
