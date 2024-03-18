/**
 * Project III: Start here.
 */
#pragma once
#include "cat_functions.h"
#include "dog_functions.h"
#include "frog_functions.h"
#include <string>

#define COLOR_BROWN "\e[38;5;130m"
#define COLOR_RED "\033[31m"
#define COLOR_YELLOW "\033[93m"
#define COLOR_GREEN "\033[32m"
#define COLOR_BLUE "\033[94m"
#define COLOR_CYAN "\e[0;36m"
#define COLOR_WHITE "\033[0m"
#define COLOR_MAGENTA "\e[0;35m"

#define H COLOR_BROWN
#define R COLOR_RED
#define Y COLOR_YELLOW
#define G COLOR_GREEN
#define B COLOR_BLUE
#define C COLOR_CYAN
#define W COLOR_WHITE

void color_text(std::string my_text, char my_color);
void displayWin(std::string petName, std::string day, char animal);
void displayDeath(std::string petName, std::string day, char animal);
