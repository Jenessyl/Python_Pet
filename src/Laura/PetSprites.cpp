#include "PetSprites.h"
#include <iostream>
#include <thread>
#include <chrono>
#include <string>

#define COLOR_RESET "\033[0m"
#define COLOR_RED "\033[31m"
#define COLOR_BLUE "\033[34m"
#define COLOR_MAGENTA "\033[35m"
#define COLOR_BOLD "\033[1m"
#define COLOR_UNDERLINE "\033[4m"
#define BG_BLUE "\033[44m"
#define BG_CYAN "\033[46m"
#define COLOR_BROWN "\e[38;5;130m"
#define COLOR_DARK_GREY "\033[90m"
#define COLOR_PINK "\033[38;5;206m"
#define COLOR_LIGHT_PINK "\033[38;5;218m"


//Cat Sprites
void catDisplay() {
        static bool frameToggle = true;
        if (frameToggle) {
        // Displaying cat ASCII art!
        std::cout << COLOR_PINK << COLOR_BOLD <<
                     "    /\\_____/\\   \n"
                     "   /  o   o  \\ meow  \n"
                     "  ( ==  ^  == )   _\n"
                     "   )         (   ) )\n"
                     "  (           ) ( ( \n"
                     " ( (  )   (  ) )   ) \n"
                     "(__(__)___(__)__)  )\n" << COLOR_RESET << std::endl;
        } else {
        std::cout << cOLOR_LIGHT_PINK << COLOR_BOLD <<
                     "    /\\_____/\\   meow \n"
                     "   /  o   o  \\     \n"
                     "  ( ==  ^  == )   _\n"
                     "   )         (  ( (\n"
                     "  (           )  ) ) \n"
                     " ( (  )   (  ) )  ( \n"
                     "(__(__)___(__)__)  )\n" << COLOR_RESET << std::endl;
        }        

        frameToggle = !frameToggle; //toggles frames

    }



void clearScreen() {
    std::cout << "\033[2J\033[H";
}
void CatSprite(int numFrames, int frameDelay) {
    for (int i = 0; i < numFrames; ++i) {
        clearScreen();
        catDisplay();
        std::cout << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(frameDelay));
    
    };
}



void catMunch() {
        static bool frameToggle = true;
        if (frameToggle) {
        // Displaying cat ASCII art!
        std::cout << "                      \n"         //if can we should make this text brown
                     "    /\\_____/\\ munch   \n"
                     "   /  o   o  \\     \n"
                     "  ( ==  ^  == )  _\n"
                     "   )         (  ( (\n"
                     "  (           )  ) ) \n"
                     " ( (  )   (  ) )  ( \n"
                     "(__(__)___(__)__)  )\n";
        } else {
        std::cout << "                 munch    \n"
                     "    /\\_____/\\    \n"
                     "   /  o   o  \\        \n"
                     "  ( ==  o  == )   _\n"
                     "   )         (   ) )\n"
                     "  (           ) ( ( \n"
                     " ( (  )   (  ) )   ) \n"
                     "(__(__)___(__)__) (\n";
        }        

        frameToggle = !frameToggle; //toggles frames

    }



void CatEating(int numFrames, int frameDelay) {
    for (int i = 0; i < numFrames; ++i) {
        clearScreen();
        catMunch();
        std::cout << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(frameDelay));
    
    };
}

void catSnooze() {
        static bool frameToggle = true;
        if (frameToggle) {
        // Displaying cat ASCII art!
        std::cout << COLOR_DARK_GREY << COLOR_BOLD <<
                     "                      \n" 
                     "    /\\_____/\\   Z \n"
                     "   /  -   -  \\ Z    \n"
                     "  ( ==  ^  == )  _\n"
                     "   )         (  ( (\n"
                     "  (           )  ) ) \n"
                     " ( (  )   (  ) )( ( \n"
                     "(__(__)___(__)__)  )\n" << COLOR_RESET << std::endl;
        } else {
        std::cout << COLOR_BOLD <<
                     "                 Z    \n"
                     "    /\\_____/\\   Z \n"
                     "   /  -   -  \\        \n"
                     "  ( ==  ^  == )   _\n"
                     "   )         (   ) )\n"
                     "  (           ) ( ( \n"
                     " ( (  )   (  ) ) ) ) \n"
                     "(__(__)___(__)__) (\n" << COLOR_RESET << std::endl;
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

void catShower() {
        static bool frameToggle = true;
        if (frameToggle) {
        // Displaying cat ASCII art!
        std::cout << COLOR_BROWN << 
                     "                      \n"         //if can we should make this text brown
                     "    /\\_____/\\ meow   \n"
                     "   /  -   -  \\     \n"
                     "  ( ==  ^  == )  _\n"
                     "   )         (  ( (\n"
                     "  (           )  ) ) \n"
                     " ( (  )   (  ) )  ( \n"
                     "(__(__)___(__)__)  )\n"<< COLOR_RESET << std::endl;
        } else {
        std::cout << COLOR_BLUE << 
                     "                 meow    \n"
                     "    /\\_____/\\    \n"
                     "   /  o   o  \\        \n"
                     "  ( ==  ^  == )   _\n"
                     "   )         (   ) )\n"
                     "  (           ) ( ( \n"
                     " ( (  )   (  ) )   ) \n"
                     "(__(__)___(__)__) (\n" << COLOR_RESET << std::endl;
        }        

        frameToggle = !frameToggle; //toggles frames

    }



void CatCleaning(int numFrames, int frameDelay) {
    for (int i = 0; i < numFrames; ++i) {
        clearScreen();
        catShower();
        std::cout << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(frameDelay));
    
    };
}

void catded() {
        static bool frameToggle = true;
        if (frameToggle) {
        // Displaying cat ASCII art!
        std::cout << COLOR_RED << "                      \n"        
                     "    /\\_____/\\    \n"
                     "   /  X   X  \\     \n"
                     "  ( ==  ^  == )  _\n"
                     "   )         (  ( (\n"
                     "  (           )  ) ) \n"
                     " ( (  )   (  ) )  ( \n"
                     "(__(__)___(__)__)  )\n" << COLOR_RESET <<  std::endl;
        } else {
        std::cout << COLOR_BOLD << "                     \n"
                     "    /\\_____/\\    \n"
                     "   /  X   X  \\        \n"
                     "  ( ==  ^  == )  _\n"
                     "   )         (  ( (\n"
                     "  (           )  ) ) \n"
                     " ( (  )   (  ) )  ( \n"
                     "(__(__)___(__)__) )\n" << COLOR_RESET << std::endl;
        }        

        frameToggle = !frameToggle; //toggles frames

    }



void CatDied(int numFrames, int frameDelay) {
    for (int i = 0; i < numFrames; ++i) {
        clearScreen();
        catded();
        std::cout << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(frameDelay));
    
    } ;
}


//Dog Sprites
void dogDisplay() {
        static bool frameToggle = true;
        if (frameToggle) {
        // Displaying dog ASCII art!
        std::cout << "        /  \\    woof     \n"
                     "       / ..|\\     \n"
                     "      (_\\  |_)    \n"
                     "      /  \\y'      \n"
                     "     /     \\      \n"
                     "_   /  `   |      \n"
                     "\\\\/  \\  | _\\      \n"
                     " \\   /_ || \\_    \n"
                     "  \\____)|_) \\_)   \n";
        } else {
        std::cout << "        /  \\      \n"
                     "       / ..|\\ woof     \n"
                     "      (_\\  |_)    \n"
                     "      /  \\y'      \n"
                     "     /     \\      \n"
                     "_   /  `   |      \n"
                     "\\\\/  \\  | _\\      \n"
                     " \\   /_ || \\_    \n"
                     "  \\____)|_) \\_)   \n";
        }        

        frameToggle = !frameToggle; //toggles frames

    }

void DogSprite(int numFrames, int frameDelay) {
    for (int i = 0; i < numFrames; ++i) {
        clearScreen();
        dogDisplay();
        std::cout << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(frameDelay));
    
    };
}

void dogMunch() {
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
        dogMunch();
        std::cout << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(frameDelay));
    
    };
}


void dogSnooze() {
        static bool frameToggle = true;
        if (frameToggle) {
        // Displaying dog ASCII art!
        std::cout << "          _                 \n"
                     "        /   \\   Z      \n"
                     "       / _ _|\\ Z                  \n"
                     "      (_\\   |_)         _   \n"
                     "      |  \\y'------___  | |   \n"
                     "      |             `--' |    \n"
                     " ___/__      ___/  |___.'     \n"
                     "(_/(____/___(_____/           ";
        } else {
        std::cout << "          _      Z         \n"
                     "        /   \\   Z      \n"
                     "       / _ _|\\             \n"
                     "      (_\\   |_)         _   \n"
                     "      |  \\y'------___  | |   \n"
                     "      |             `--' |    \n"
                     " ___/__      ___/  |___.'     \n"
                     "(_/(____/___(_____/           ";
        }        

        frameToggle = !frameToggle; //toggles frames

    }

void DogSleeping(int numFrames, int frameDelay) {
    for (int i = 0; i < numFrames; ++i) {
        clearScreen();
        dogSnooze();
        std::cout << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(frameDelay));
    
    };
}

void dogDed() {
        static bool frameToggle = true;
        if (frameToggle) {
        // Displaying dog ASCII art!
        std::cout << "          _                 \n"
                     "        /   \\         \n"
                     "       / x x|\\                   \n"
                     "      (_\\   |_)         _   \n"
                     "      |  \\y'------___  | |   \n"
                     "      |             `--' |    \n"
                     " ___/__      ___/  |___.'     \n"
                     "(_/(____/___(_____/           ";
        } else {
        std::cout << "          _               \n"
                     "        /   \\         \n"
                     "       / x x|\\             \n"
                     "      (_\\   |_)         _   \n"
                     "      |  \\y'------___  | |   \n"
                     "      |             `--' |    \n"
                     " ___/__      ___/  |___.'     \n"
                     "(_/(____/___(_____/           ";
        }        

        frameToggle = !frameToggle; //toggles frames

    }

void DogDied(int numFrames, int frameDelay) {
    for (int i = 0; i < numFrames; ++i) {
        clearScreen();
        dogDed();
        std::cout << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(frameDelay));
    
    };
}


//Frog Sprites

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

void FrogSprite(int numFrames, int frameDelay) {
    for (int i = 0; i < numFrames; ++i) {
        clearScreen();
        frogDisplay();
        std::cout << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(frameDelay));
    
    };
}


void frogMunch() {
        static bool frameToggle = true;
        if (frameToggle) {
        // Displaying dog ASCII art!
        std::cout << "     _   _        munch    \n"
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
        frogMunch();
        std::cout << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(frameDelay));
    
    };
}


void frogSnooze() {
        static bool frameToggle = true;
        if (frameToggle) {
        // Displaying dog ASCII art!
        std::cout << COLOR_DARK_GREY << COLOR_BOLD << "                              \n"
                     "         _   _   Z     \n"
                     "        (-)_(-) Z       \n"
                     "     _ (   _   ) _    \n"
                     "    / \\/`-----'\\/ \\   \n"
                     "  __\\ ( (     ) ) /__ \n"
                     "  )   /\\ \\._./ /\\   ( \n"
                     "   )_/ /|\\   /|\\ \\_(    " << COLOR_RESET << std::endl;
        } else {
        std::cout << COLOR_BOLD <<
                     "                  Z            \n"
                     "         _   _   Z         \n"
                     "        (-)_(-)       \n"
                     "     _ (   _   ) _    \n"
                     "    / \\/`-----'\\/ \\   \n"
                     "  __\\ ( (     ) ) /__ \n"
                     "  )   /\\ \\._./ /\\   ( \n"
                     "   )_/ /|\\   /|\\ \\_(    " << COLOR_RESET << std::endl;
        }        

        frameToggle = !frameToggle; //toggles frames

    }

void FrogSleeping(int numFrames, int frameDelay) {
    for (int i = 0; i < numFrames; ++i) {
        clearScreen();
        frogSnooze();
        std::cout << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(frameDelay));
    
    };
}

void frogShower() {
        static bool frameToggle = true;
        if (frameToggle) {
        // Displaying dog ASCII art!
        std::cout << COLOR_BROWN<< COLOR_BOLD<<
                     "         ⸯ       ⸯ        ⸯ    ⸯ  \n"
                     "ⸯ       ⸯ _   _    ⸯ    \n"
                     " ⸯ    ⸯ  (-)_(-)  ribbit  ⸯ     \n"
                     "ⸯ   ⸯ _ (   _   ) _    \n"
                     "    / \\/`-----'\\/ \\   \n"
                     "  __\\ ( (     ) ) /__ \n"
                     "  )   /\\ \\._./ /\\   ( \n"
                     "   )_/ /|\\   /|\\ \\_(    "<< COLOR_RESET << std::endl;
        } else {
        std::cout << COLOR_BLUE << COLOR_BOLD <<
                     "   ˚         ⟡     ˚    ⟡     \n"
                     "    ⟡  ˚ _   _     ribbit       \n"
                     "        (.)_(.)   ⟡    ˚ \n"
                     "  ⟡  _ (   _   ) _    \n"
                     "    / \\/`-----'\\/ \\⟡   \n"
                     "˚ __\\ ( (     ) ) /__ \n"
                     "  )   /\\ \\._./ /\\   ( \n"
                     "   )_/ /|\\   /|\\ \\_(    " COLOR_RESET << std::endl;
        }        

        frameToggle = !frameToggle; //toggles frames

    }

void FrogCleaning(int numFrames, int frameDelay) {
    for (int i = 0; i < numFrames; ++i) {
        clearScreen();
        frogShower();
        std::cout << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(frameDelay));
    
    };
}

void frogDed() {
        static bool frameToggle = true;
        if (frameToggle) {
        // Displaying dog ASCII art!
        std::cout << "         _   _           \n"
                     "        (x)_(x)       \n"
                     "     _ (   _   ) _    \n"
                     "    / \\/`-----'\\/ \\   \n"
                     "  __\\ ( (     ) ) /__ \n"
                     "  )   /\\ \\._./ /\\   ( \n"
                     "   )_/ /|\\   /|\\ \\_(    ";
        } else {
        std::cout << "         _   _       \n"
                     "        (x)_(x)       \n"
                     "     _ (   _   ) _    \n"
                     "    / \\/`-----'\\/ \\   \n"
                     "  __\\ ( (     ) ) /__ \n"
                     "  )   /\\ \\._./ /\\   ( \n"
                     "   )_/ /|\\   /|\\ \\_(    ";
        }        

        frameToggle = !frameToggle; //toggles frames

    }

void FrogDied(int numFrames, int frameDelay) {
    for (int i = 0; i < numFrames; ++i) {
        clearScreen();
        frogDed();
        std::cout << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(frameDelay));
    
    };
}




//TESTING CODE



int main() { ///CODE THAT WILL BE USED IN MAIN CODE
    //std::string foodChoice;                            //could be userChoice and then individually doing the eating, sleeping, cleaning, individualy
    //std::cout << "Feed you pet? Yes or no?" << std::endl;
    //std::cin >> foodChoice;                             //use tolower to make sure its no issues arise

    std::string sleepChoice;
    std::cout << "Have your pet sleep? Yes or no?" << std::endl;
    std::cin >> sleepChoice;                    //figure out how to lowercase user input

    //std::string washChoice;
    //std::cout << "Wash your pet? Yes or no?" << std::endl;
    //std::cin >> washChoice; 


//if (foodChoice == "yes") {
    //CatEating(5, 500);
    //DogEating(5, 500);
    //FrogEating(5, 500);
    
//} else {
    //CatSprite(5, 500);
    //DogSprite(6, 500);
    //FrogSprite(6, 500);
    //std::cout << "You choose not to feed your pet." << std::endl;
//}

if (sleepChoice == "yes") {
    CatSleeping(6, 500); 
    //DogSleeping(6, 500);
    //FrogSleeping(6, 500);   
} else{
    CatSprite(6, 500);
    //DogSprite(6, 500);
    //FrogSprite(6, 500);
    std::cout << "Your pet did not go to sleep." << std::endl;
}

//if (washChoice == "yes") {
    //CatCleaning(6, 500); 
    //DogCleaning(6, 500);
    //FrogCleaning(6, 500);   
//} else{
    //CatSprite(6, 500);
    //DogSprite(6, 500);
    //FrogSprite(6, 500);
//    std::cout << "Your pet did not get clean." << std::endl;
//}


return 0;
}






//if (washChoice == "yes") {
    //CatCleaning(6, 500); 
    //DogCleaning(6, 500);
    //FrogCleaning(6, 500);   
//} else{
    //CatSprite(6, 500);
    //DogSprite(6, 500);
    //FrogSprite(6, 500);
    //std::cout << "Your pet did not get clean." << std::endl;
//}


//return 0;
//}





