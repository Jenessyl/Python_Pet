#pragma once
#include "PetSprites.h"
#include <cstdlib>
#include <iostream>
#include <string>
#include <cstdlib>
    
    

class Cat {
public:
void Normal();
void Eating();
void Cleaning();
void Sleeping();
void Died();
void clearScreen();

void displayNormal(int numFrames, int frameDelay);
void displayEating(int numFrames, int frameDelay);
void displayCleaning(int numFrames, int frameDelay);
void displaySleeping(int numFrames, int frameDelay);
void displayDied(int numFrames, int frameDelay);

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