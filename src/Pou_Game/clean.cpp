#include "clean.h"
#include "bars.h"
#include "library.h"
#include <ctime>
#include <iostream>

// This function ativates the clean action

void clean_action(std::string petName, Bars &petBars, char animal) {

  switch (animal) {
  case 'a':
    dogDisplayCleaning();
    break;
  case 'b':
    catDisplayCleaning();
    break;
  case 'c':
    frogDisplayCleaning();
    break;
  }

  color_text("〰〰〰〰〰〰〰〰〰〰〰〰〰〰〰〰〰", 'C');
  color_text("🛁 IT IS BATHTIME! 🛁", 'C');
  color_text("〰〰〰〰〰〰〰〰〰〰〰〰〰〰〰〰〰", 'C');

  // Generating a random scenario
  int ScenarioNum;
  ScenarioNum = (rand() % 5); //

  switch (ScenarioNum) {
  case 0:
    std::cout << petName << " was extra relaxed and played with bubbles."
              << std::endl;
    petBars.increaseHealthPoints(5);
    petBars.increaseHygienePoints(10);
    petBars.increaseHappinessPoints(5);
    color_text("Health +5", 'G');
    color_text("Hygiene +10", 'G');
    color_text("Happiness +5", 'G');
    break;
  case 1:
    std::cout << petName << " feels pampered and clean." << std::endl;
    petBars.increaseHygienePoints(10);
    petBars.decreaseSleepPoints(10);
    color_text("Hygiene +10", 'G');
    color_text("Sleep -10", 'R');
    break;
  case 2:
    std::cout << petName << " sprained its ankle getting out of the bath."
              << std::endl;
    petBars.increaseHygienePoints(10);
    petBars.decreaseHealthPoints(25);
    petBars.decreaseSleepPoints(20);
    color_text("Hygiene +10", 'G');
    color_text("Health -25", 'R');
    color_text("Sleep -20", 'R');
    break;
  case 3:
    std::cout << petName << " got soap in its eyes. Ouch!" << std::endl;
    petBars.increaseHygienePoints(5);
    petBars.decreaseHealthPoints(10);
    petBars.decreaseSleepPoints(15);
    color_text("Hygiene +5", 'G');
    color_text("Health -10", 'R');
    color_text("Sleep -15", 'R');
    break;
  }
  // Happiness will increase no matter the scenario
  std::cout << std::endl;
  petBars.increaseHappinessPoints(5);
  color_text("❥ " + petName + " thanks you for bathing it ❥", 'C');
  color_text("Happiness +5", 'G');
  std::cout << std::endl;
}
