#include "-PetSprites.h"
#include <iostream>
#include <thread>
#include <chrono>
#include <string>
#include ""


void PetSprite::displayFeed(const Pet &pet) {
    clearScreen();
    pet.displayAsciiArt();
    std::cout << std::endl;

    pet.feed(bars);

}
