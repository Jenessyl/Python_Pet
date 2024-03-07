#pragma once

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
    
    void barStatus();
    void decreaseHealthPoints();
    void increaseHealthPoints();
    
    Bars(int health = 100, int happiness = 100, int hunger = 100, int sleep = 100, int hygiene = 100);

private:
    const int MAX = 100;
    int health;
    int happiness;
    int hunger;
    int sleep;
    int hygiene;
};
