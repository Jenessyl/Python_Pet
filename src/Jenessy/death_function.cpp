#include <string>
#include <iostream>

//This function will play if health bar is 0 or lower (Lose)
void displayDeath(std::string petName) {
    std::cout << "============================" << std::endl;
    std::cout << "OH NO! " << petName << "'s health went too low. They have DIED" << std::endl;
    std::cout << petName << " cries in the afterlife." << std::endl;
    //put sprite

    std::cout << "============================" << std::endl;
    std::cout << "❖ You were not meant to be a pet owner ❖" << std::endl;
}

//test
int main() {
    displayDeath("Tony");
    return 0;
}