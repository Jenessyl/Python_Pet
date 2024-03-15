#include <string>
#include <iostream>

//This function will play if the player gets the affection bar to 100 (Wins)
void displayWin(std::string petName) {
    std::cout << "============================" << std::endl;
    std::cout << "Congratulations!\n" << "You have reached a max level of affection with " << petName << "." << std::endl;
    std::cout << petName << " wishes you the best in life and will never forget you." << std::endl;
    //put sprite

    std::cout << "============================" << std::endl;
    std::cout << "✿ Thank you for playing ✿" << std::endl;
}