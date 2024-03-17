#include <iostream>
#include "playGame.h"
#include "../library.cpp"

// Number guessing game using binary search with recursion
void playGame(std::string name, Bars petBar, int lowVal, int highVal, int numGuesses) {

    // include this in game loop before calling this function since it is recursive and will print each time
    color_text("〰〰〰〰〰〰〰〰〰〰〰〰〰〰〰〰〰", 'C');
    color_text("🧩 WELCOME TO THE GUESSING GAME! 🧩", 'B');
    color_text("〰〰〰〰〰〰〰〰〰〰〰〰〰〰〰〰〰", 'C');


    //show sprite of pet playing a game

    if (numGuesses == 3) {
        std::cout << "==============================================" << std::endl;
        std::cout << "Sorry, you've exhausted all your guesses." << std::endl;
        std::cout << "The correct number was not found." << std::endl;
        std::cout << "==============================================" << std::endl;
        return;
    }

    std::cout << "==============================================" << std::endl;
    std::cout << "Choose a number from " << lowVal << " to " << highVal << "." << std::endl;
    std::cout << name << " will try to guess it (l, h, y)" << std::endl;
    std::cout << "==============================================" << std::endl;

    char userAnswer;
    int midVal = (highVal + lowVal) / 2;
    std::cout << "Is it " << midVal << "? ";
    std::cin >> userAnswer;

    if (userAnswer == 'y') {
        std::cout << "==============================================" << std::endl;
        std::cout << "Yay! We did it! Thanks for playing!" << std::endl;
        std::cout << "==============================================" << std::endl;
        return;
    }

    if (userAnswer == 'l') {
        playGame(name, petBar, lowVal, midVal, numGuesses + 1); 
    } else {
        playGame(name, petBar, midVal + 1, highVal, numGuesses + 1); 
    }


    //Happiness will increase after the game: since its recursive it will print for each call, but it should only happen once so include this in the game loop after calling this function
    std::cout << std::endl;
    petBar.increaseHappinessPoints(10);
    color_text("❥ " + name + " thanks you for playing with it ❥", 'C');
    color_text("Happiness +10", 'G');
    std::cout << std::endl;


}

int main() {
    std::string name = "sally";
    Bars bar;
    playGame(name, bar);

    return 0;
}
