#include "playGame.h"
#include "library.h"
#include <iostream>

// Number guessing game using binary search with recursion
void playGame(std::string name, Bars &petBars, int lowVal, int highVal,
              int numGuesses) {

  if (numGuesses == 3) {
    color_text("==============================================", 'C');
    color_text("Sorry, you've exhausted all your guesses.", 'Y');
    color_text("The correct number was not found.", 'Y');
    color_text("==============================================", 'C');
    petBars.increaseHappinessPoints(5);
    petBars.decreaseSleepPoints(10);
    color_text("Happiness +5", 'G');
    color_text("Sleep -10", 'R');
    return;
  }

  color_text("==============================================", 'C');
  std::cout << "Choose a number from " << lowVal << " to " << highVal << "."
            << std::endl;
  std::cout << name << " will try to guess it (l, h, y)" << std::endl;
  color_text("==============================================", 'C');

  char userAnswer;
  int midVal = (highVal + lowVal) / 2;
  std::cout << "Is it " << midVal << "? ";
  std::cin >> userAnswer;

  if (userAnswer == 'y') {
    color_text("==============================================", 'C');
    color_text("Yay, we did it! Thanks for playing!", 'Y');
    color_text("==============================================", 'C');
    petBars.increaseHappinessPoints(15);
    petBars.decreaseSleepPoints(10);
    color_text("Happiness +15", 'G');
    color_text("Sleep -10", 'R');

    return;
  }

  if (userAnswer == 'l') {
    playGame(name, petBars, lowVal, midVal, numGuesses + 1);
  } else {
    playGame(name, petBars, midVal + 1, highVal, numGuesses + 1);
  }
}
