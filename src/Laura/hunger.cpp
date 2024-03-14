#include "hunger.h"
#include "../lisbette/bars.h"
#include "../lisbette/main.cpp"

//hunger or feed function for pets


void feed(Pet& pet, Bars& bars) {
    std::cout << "Would you like to feed your pet? (yes/no): ";
    std::string feedChoice;
    std::cin >> feedChoice;

    if (feedChoice == "yes") {
        bars.increaseHungerPoints();        //not sure if I need to add the exact amount in parameters or not
        std::cout << "You fed your pet, and increased its bars!" << std::endl;
    } else if (feedChoice == "no") {
        std::cout << "You chose not to feed your pet." << std::endl;
    } else {
        std::cout << "Invalid choice. Please enter 'yes' or 'no'." << std::endl;
    }
}
