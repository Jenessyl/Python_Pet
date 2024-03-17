#include <iostream>
#include "playGame.h"

// Number guessing game using binary search with recursion
void playGame(int lowVal, int highVal, int numGuesses) {
    if (numGuesses == 3) {
        std::cout << "==============================================" << std::endl;
        std::cout << "Sorry, you've exhausted all your guesses." << std::endl;
        std::cout << "The correct number was not found." << std::endl;
        std::cout << "==============================================" << std::endl;
        return;
    }

    std::cout << "==============================================" << std::endl;
    std::cout << "Choose a number from " << lowVal << " to " << highVal << "." << std::endl;
    std::cout << "I will try to guess your number (l, h, y)" << std::endl;
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
        playGame(lowVal, midVal, numGuesses + 1); 
    } else {
        playGame(midVal + 1, highVal, numGuesses + 1); 
    }
}

int main() {
    playGame();

    return 0;
}
