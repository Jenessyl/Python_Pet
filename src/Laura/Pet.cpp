//#include "Pet.h"
#include "PetSprites.h"
#include <iostream>

// here is where each pet type class is made, cat, dog, and frog.


class Cat {
public:
void clearScreen();

void CatSprite();
void CatSleeping();
void CatEating();
void CatCleaning();
void CatDied();

};

class Dog  {
public:
void clearScreen();
    
void DogSprite();
void DogSleeping();
void DogEating();
void DogCleaning();
void DogDied();

};

class Frog  {
public: 
void clearScreen();
   
void FrogSprite();
void FrogSleeping();
void FrogEating();
void FrogCleaning();
void FrogDied();
    
};


