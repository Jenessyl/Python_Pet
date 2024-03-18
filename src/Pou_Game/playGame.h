#pragma once
#include "bars.h"
#include <iostream>
#include <string>

void playGame(std::string name, Bars &petBar, int lowVal = 0, int highVal = 10,
              int numGuesses = 0);
