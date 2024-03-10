#include "sleep.h"
#include <chrono>
#include <cstdlib>
#include <iostream>
#include <ostream>
#include <thread>
#include <ctime>

// Puts the pet to sleep and provides updates while the pet sleeps. parameter
// should be pet object, for now its a string

void sleep(std::string pet) {
  std::cout << "Goodnight! Your pet is going to bed.\n" << std::endl;

  //   include the sleeping sprite

  int sleepProgress = 0;
  while (sleepProgress < 100) {
    std::this_thread::sleep_for(std::chrono::milliseconds(100));
    sleepProgress += 25;
    std::cout << "Sleeping... Progress: " << sleepProgress << "%" << std::endl;
  }
  std::cout << "\n" << pet << " woke up!" << std::endl;

  // chooses a random integer from 1-4 that corresponds to sleep activity
  int randomNumber;
  srand(time(NULL));
  randomNumber = (rand() %5);

  switch (randomNumber) {
  case 0:
    std::cout << "Your pet had a great night of sleep." << std::endl;
    // adjust bars
    break;
  case 1:
    std::cout << "Your pet is feeling well rested." << std::endl;
    // adjust bars
    break;
  case 2:
    std::cout << "Your pet is feeling sick. Oh no!" << std::endl;
    // adjust bars
    break;
  case 3:
    std::cout << "Your pet was tossing & turning all night." << std::endl;
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
  int randomNumber;
  std::string pet = "Pou";
  sleep(pet);
  return 0;
}
