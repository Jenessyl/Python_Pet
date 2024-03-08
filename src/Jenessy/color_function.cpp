#include "colors.h"
#include <string>
#include <iostream>

#define R COLOR_RED
#define Y COLOR_YELLOW
#define G COLOR_GREEN
#define B COLOR_BLUE
#define W COLOR_WHITE

//takes text and desired color (R,Y,G,B) as arguments and outputs colored text (Input text will have an endl attached once printed)
void color_text(std::string my_text, char my_color) {
    std::string colored_string, colored_set;

    switch(my_color) {
        case 'R':
            colored_set = R; // Sets text to red
            std::cout << colored_set;
            std::cout << my_text << std::endl;
            break;
        
        case 'Y':
            colored_set = Y; // Sets text to yellow
            std::cout << colored_set;
            std::cout << my_text << std::endl;
            break;
        
        case 'G':
            colored_set = G; // Sets text to green
            std::cout << colored_set;
            std::cout << my_text << std::endl;
            break;
        
        case 'B':
            colored_set = B; // Sets text to blue
            std::cout << colored_set;
            std::cout << my_text << std::endl;
            break;
        }

    colored_string = W;
    std::cout << colored_string; 
}