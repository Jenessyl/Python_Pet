/**
 * Project III: Start here.
 */
#include <string>
// #include "colors.h"
#include <iostream>
#include <string>

#define COLOR_BROWN "\e[38;5;130m"
#define COLOR_RED "\033[31m"
#define COLOR_YELLOW "\033[93m"
#define COLOR_GREEN "\033[32m"
#define COLOR_BLUE "\033[94m"
#define COLOR_WHITE "\033[0m"

#define H COLOR_BROWN
#define R COLOR_RED
#define Y COLOR_YELLOW
#define G COLOR_GREEN
#define B COLOR_BLUE
#define W COLOR_WHITE

// takes text and desired color (R,Y,G,B) as arguments and outputs colored text
// (Input text will have an endl attached once printed)
void color_text(std::string my_text, char my_color) {
  std::string colored_string, colored_set;

  switch (my_color) {
  case 'R':
    colored_set = R; // Sets text to red
    std::cout << colored_set;
    std::cout << my_text << std::endl;
    break;

  case 'Y':
    colored_set = Y; // Sets text to yellow
    std::cout << colored_set;
    std::cout << my_text << std::endl;
    break;

  case 'G':
    colored_set = G; // Sets text to green
    std::cout << colored_set;
    std::cout << my_text << std::endl;
    break;

  case 'B':
    colored_set = B; // Sets text to blue
    std::cout << colored_set;
    std::cout << my_text << std::endl;
    break;

  case 'H':
    colored_set = H; // Sets text to blue
    std::cout << colored_set;
    std::cout << my_text << std::endl;
    break;  
  }

  colored_string = W;
  std::cout << colored_string;
}


class Bars {
public:
  // getter functions for each bar
  int getHealth();
  int getHappiness();
  int getHunger();
  int getSleep();
  int getHygiene();

  // allows bars to be set to a different number
  int setHealth(int);
  int setHappiness(int);
  int setHunger(int);
  int setSleep(int);
  int setHygiene(int);

  // info about all the bars and functions that affect all bars
  void barStatus();
  void decreasePoints(int amount = 10);
  void increasePoints(int amount = 5);

  void decreaseHealthPoints(int amount = 10);
  void increaseHealthPoints(int amount = 5);

  void decreaseHappinessPoints(int amount = 10);
  void increaseHappinessPoints(int amount = 5);

  void decreaseHungerPoints(int amount = 10);
  void increaseHungerPoints(int amount = 5);

  void decreaseSleepPoints(int amount = 10);
  void increaseSleepPoints(int amount = 5);

  void decreaseHygienePoints(int amount = 10);
  void increaseHygienePoints(int amount = 5);

  // initializes the bars to the starting amount of points
  Bars(int health = 100, int happiness = 40, int hunger = 100, int sleep = 100,
       int hygiene = 100);

private:
  const int MAX = 100;
  int value;
  int health;
  int happiness;
  int hunger;
  int sleep;
  int hygiene;
};
