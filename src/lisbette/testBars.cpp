#include <cstdint>
#include "bars.h"
#include <iostream>

int main() {
    // Create an instance of the Bars class
    Bars petBars(100, 100, 100, 100, 100);

    // Test setting and getting values
    petBars.setHealth(90);
    std::cout << "Health: " << petBars.getHealth() << std::endl;

    // Test increasing and decreasing points
    petBars.decreasePoints(10);
    std::cout << "Decreased points: " << std::endl;
    petBars.barStatus();

    petBars.increasePoints(15);
    std::cout << "Increased points: " << std::endl;
    petBars.barStatus();

    // Test specific attribute functions
    petBars.decreaseHealthPoints(20);
    std::cout << "Decreased health points: " << std::endl;
    petBars.barStatus();

    petBars.increaseHappinessPoints(10);
    std::cout << "Increased happiness points: " << std::endl;
    petBars.barStatus();

    return 0;
}
