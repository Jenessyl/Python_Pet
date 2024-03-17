// #include "hunger.h"
#include <ctime>

//feed function for pets

void feed(std::string petName) {
  std::cout << "Time to feed " << petName << "!" << std::endl;

//inster sprite here

  int ScenarioNum;
  ScenarioNum = (rand()% 5);

  switch(ScenarioNum) {
    case 0:
        std::cout << "\n===========================================================\n" << std::endl;
        std::cout << petName << " had a yummy snack!" << std::endl;
        std::cout << "\n===========================================================\n" << std::endl;
        break;
    case 1:
        std::cout << "\n===========================================================\n" << std::endl;
        std::cout << petName << " had the best taqueria burrito!" << std::endl;
        std::cout << "\n===========================================================\n" << std::endl;
        break;
    case 2:
        std::cout << "\n===========================================================\n" << std::endl;
        std::cout << "Oh no! "<< petName << " choked on their snack :(" << std::endl;
        std::cout << "\n===========================================================\n" << std::endl;
        break;
    case 3:
        std::cout << "\n===========================================================\n" << std::endl;
        std::cout << petName << " accidentally ate spoiled food and got an upset stomach :(" << std::endl;
        std::cout << "\n===========================================================\n" << std::endl;
        break;
  }

}
