/**
 * Project III: Start here.
 */

#include "bars.h"
#include "library.h"
#include <iostream>
#include <string>

#define COLOR_RESET "\033[0m"
#define COLOR_RED "\033[31m"
#define COLOR_BLUE "\033[34m"
#define COLOR_MAGENTA "\033[35m"
#define COLOR_BOLD "\033[1m"
#define COLOR_UNDERLINE "\033[4m"
#define BG_BLUE "\033[44m"
#define BG_CYAN "\033[46m"



int main() {
    // Print the menu for pet selection
    char petChoice;
    std::string petName;

    do {
        std::cout << COLOR_BLUE << COLOR_BOLD <<   "======================================" << std::endl
                  << "          Welcome to My Pet!" << std::endl
                  << "======================================\n" << COLOR_RESET << std::endl;

        std::cout <<  COLOR_BOLD << "Choose your pet:" << std::endl
                  << "a) Dog" << std::endl
                  << "b) Cat" << std::endl
                  << "c) Frog\n" << std::endl
                  << "Pet Choice: " COLOR_RESET;

        std::cin >> petChoice;
        petChoice = tolower(petChoice);

        switch (petChoice) {
            case 'a':
                std::cout << "Enter the name of your pet: ";
                std::cin >> petName;
                // Bars dogBar;
                // dogBar.barStatus();
                // create obj
                break;

            case 'b':
                std::cout << "Enter the name of your pet: ";
                std::cin >> petName;
                break;

            case 'c':
                std::cout << "Enter the name of your pet: ";
                std::cin >> petName;
                break;
        }

    } while ((petChoice == 'a') || (petChoice == 'b') || (petChoice == 'c'));

    std::cout << COLOR_RED << "INVALID ENTRY: VALID INPUTS INCLUDE \"a\", \"b\", or \"c\"" << COLOR_RESET << std::endl;
    std::cin >> petChoice;

    if (petChoice == "a") {

    }
}
