#pragma once
#include "-Pet.h"
#include "-hunger.h"
#include "../lisbette/bars.h"


class PetSprite{
public:
// static member functions
    static void displaySleep(const Pet& pet);
    static void displayFeed(const Pet& pet);
};