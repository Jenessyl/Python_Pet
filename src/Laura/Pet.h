#pragma once
#include "PetSprites.h"
#include <cstdlib>
#include <iostream>
#include <string>
#include <cstdlib>
    
    

class Cat {
public:
void clearScreen();
void Normal();

void Display(int numFrames, int frameDelay);
void Eating();
void Cleaning();
void Sleeping();
void Died();

};

// class Dog  {
// public:
// void clearScreen();
    
// void DogSprite();
// void DogSleeping();
// void DogEating();
// void DogCleaning();
// void DogDied();

// };

// class Frog  {
// public: 
// void clearScreen();
   
// void FrogSprite();
// void FrogSleeping();
// void FrogEating();
// void FrogCleaning();
// void FrogDied();
    
// };