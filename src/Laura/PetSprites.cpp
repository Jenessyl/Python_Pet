#include "PetSprites.h"
#include <iostream>
#include <thread>
#include <chrono>
#include <string>
//#include "../lisbette/main.cpp"

//Cat Sprites
void catDisplay() {
        static bool frameToggle = true;
        if (frameToggle) {
        // Displaying cat ASCII art!
        std::cout << "    /\\_____/\\   \n"
                     "   /  o   o  \\   munch  \n"
                     "  ( ==  o  == )  _\n"
                     "   )         (  ( (\n"
                     "  (           )  ) ) \n"
                     " ( (  )   (  ) )  ( \n"
                     "(__(__)___(__)__)  )\n";
        } else {
        std::cout << "    /\\_____/\\   \n"
                     "   /  o   o  \\        munch \n"
                     "  ( ==  ^  == )   _\n"
                     "   )         (   ) )\n"
                     "  (           ) ( ( \n"
                     " ( (  )   (  ) )   ) \n"
                     "(__(__)___(__)__) (\n";
        }        

        frameToggle = !frameToggle; //toggles frames

    }


void clearScreen() {
    std::cout << "\033[2J\033[H";
}

void CatEating(int numFrames, int frameDelay) {
    for (int i = 0; i < numFrames; ++i) {
        clearScreen();
        catDisplay();
        std::cout << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(frameDelay));
    
    } std::cout << "You fed your cat some yummy kibble!\n";
}

void catSnooze() {
        static bool frameToggle = true;
        if (frameToggle) {
        // Displaying cat ASCII art!
        std::cout << "                      \n" 
                     "    /\\_____/\\   Z \n"
                     "   /  -   -  \\ Z    \n"
                     "  ( ==  ^  == )  _\n"
                     "   )         (  ( (\n"
                     "  (           )  ) ) \n"
                     " ( (  )   (  ) )  ( \n"
                     "(__(__)___(__)__)  )\n";
        } else {
        std::cout << "                 Z    \n"
                     "    /\\_____/\\   Z \n"
                     "   /  -   -  \\        \n"
                     "  ( ==  ^  == )   _\n"
                     "   )         (   ) )\n"
                     "  (           ) ( ( \n"
                     " ( (  )   (  ) )   ) \n"
                     "(__(__)___(__)__) (\n";
        }        

        frameToggle = !frameToggle; //toggles frames

    }



void CatSleeping(int numFrames, int frameDelay) {
    for (int i = 0; i < numFrames; ++i) {
        clearScreen();
        catSnooze();
        std::cout << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(frameDelay));
    
    } std::cout << "Your cat slept all night!\n";
}


//Dog Sprites
void dogDisplay() {
        static bool frameToggle = true;
        if (frameToggle) {
        // Displaying dog ASCII art!
        std::cout << "        /  \\      \n"
                     "       / ..|\\   munch   \n"
                     "      (_\\  |_)    \n"
                     "      /  \\y'      \n"
                     "     /     \\      \n"
                     " _  /  `   |      \n"
                     "\\\\/  \\  | _\\      \n"
                     " \\   /_ || \\_    \n"
                     "  \\____)|_) \\_)   \n";
        } else {
        std::cout << "        /  \\      \n"
                     "       / ..|\\       munch  \n"
                     "      (_\\  |_)    \n"
                     "      /  \\O'      \n"
                     "     /     \\      \n"
                     "_   /  `   |      \n"
                     "\\\\/  \\  | _\\      \n"
                     " \\   /_ || \\_    \n"
                     "  \\____)|_) \\_)   \n";
        }        

        frameToggle = !frameToggle; //toggles frames

    }

void DogEating(int numFrames, int frameDelay) {
    for (int i = 0; i < numFrames; ++i) {
        clearScreen();
        dogDisplay();
        std::cout << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(frameDelay));
    
    } std::cout << "You fed your dog yummy bones!\n";
}


//Frog Sprites
void frogDisplay() {
        static bool frameToggle = true;
        if (frameToggle) {
        // Displaying dog ASCII art!
        std::cout << "         _   _    munch    \n"
                 "        (.)_(.)       \n"
                 "     _ (   _   ) _    \n"
                 "    / \\/`-----'\\/ \\   \n"
                 "  __\\ ( (     ) ) /__ \n"
                 "  )   /\\ \\._./ /\\   ( \n"
                 "   )_/ /|\\   /|\\ \\_(    ";
        } else {
        std::cout << "         _   _         munch   \n"
                     "        (.)_(.)       \n"
                     "     _ (   o   ) _    \n"
                     "    / \\/`-----'\\/ \\   \n"
                     "  __\\ ( (     ) ) /__ \n"
                     "  )   /\\ \\._./ /\\   ( \n"
                     "   )_/ /|\\   /|\\ \\_(    ";
        }        

        frameToggle = !frameToggle; //toggles frames

    }

void FrogEating(int numFrames, int frameDelay) {
    for (int i = 0; i < numFrames; ++i) {
        clearScreen();
        frogDisplay();
        std::cout << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(frameDelay));
    
    } std::cout << "You fed your frog yummy flies!\n";
}






//TESTING CODE//

int main() { ///CODE THAT WILL BE USED IN MAIN CODE
    //std::string foodChoice;                            //could be userChoice and then individually doing the eating, sleeping, cleaning, individualy
    //std::cout << "Feed pet? Yes or no?" << std::endl;
    //std::cin >> foodChoice;                             //use tolower to make sure its no issues arise

    std::string sleepChoice;
    std::cout << "Sleep pet? Yes or no?" << std::endl;
    std::cin >> sleepChoice;
//if (foodChoice == "yes") {
    //CatEating(5, 500);
    //DogEating(5, 500);
    //FrogEating(5, 500);
    
//} else {
//    std::cout << "You choose not to feed your pet." << std::endl;
//}
if (sleepChoice == "yes") {
    CatSleeping(6, 500);    
} else{
    std::cout << "Your cat did not go to sleep." << std::endl;
}


return 0;
}



//void displaypetanimation(int numFrames, int frameDelay) {
//    for (int i = 0; i < numFrames; ++i) {
//    clearScreen();
//    displaycat();
//    std::cout << std::endl;
//    std::this_thread::sleep_for(std::chrono::milliseconds(frameDelay))
//    }
//}

