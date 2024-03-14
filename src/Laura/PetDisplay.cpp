#include "Pet.h"
#include <iostream>
#include <string>


#include "-PetDisplay.h"

void displayPetInfo(const Pet& pet) {
    std::cout << "Pet Type: " << pet.displayPet() << std::endl;
}

