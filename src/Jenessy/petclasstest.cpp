#pragma once

#include <cstdlib>
#include <iostream>
#include <string>
#include <cstdlib>

class Frog {
    public:
    //member variables
    std::string Normal;
    std::string Wash;
    std::string Feed;
    std::string Sleep;
    std::string Died;

    //member functions
    void setNormal(std::string);
    void setWash(std::string);
    void SetFeed(std::string);
    void setSleep(std::string);
    void setDied(std::string);

    void getNormal();
    void getWash();
    void getFeed();
    void getSleep();
    void getDied();
};

void frogDisplay() {
        static bool frameToggle = true;
        if (frameToggle) {
        // Displaying dog ASCII art!
        std::cout << "         _   _           \n"
                     "        (.)_(.)   ribbit    \n"
                     "     _ (   _   ) _    \n"
                     "    / \\/`-----'\\/ \\   \n"
                     "  __\\ ( (     ) ) /__ \n"
                     "  )   /\\ \\._./ /\\   ( \n"
                     "   )_/ /|\\   /|\\ \\_(    ";
        } else {
        std::cout << "         _   _     ribbit   \n"
                     "        (.)_(.)       \n"
                     "     _ (   _   ) _    \n"
                     "    / \\/`-----'\\/ \\   \n"
                     "  __\\ ( (     ) ) /__ \n"
                     "  )   /\\ \\._./ /\\   ( \n"
                     "   )_/ /|\\   /|\\ \\_(    ";
        }        

        frameToggle = !frameToggle; //toggles frames

    }

