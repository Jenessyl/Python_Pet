#pragma once

class Bars {

public:
  Bars(int health = 100, int happiness = 40, int hunger = 100, int sleep = 100,
       int hygiene = 100);

  // getter functions for each bar
  int getHealth();
  int getHappiness();
  int getHunger();
  int getSleep();
  int getHygiene();

  void setHealth(int);
  void setHappiness(int);
  void setHunger(int);
  void setSleep(int);
  void setHygiene(int);

  // functions that relate to all bars
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

private:
  const int MAX = 100;
  int value;
  int health;
  int happiness;
  int hunger;
  int sleep;
  int hygiene;
};
