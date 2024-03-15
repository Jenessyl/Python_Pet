#include "PetSprites.h"
#include <iostream>
#include <thread>
#include <chrono>
#include <string>
//#include "../lisbette/main.cpp"

//When using this we will have to compile the PetSprites.cpp and whatever main.cpp file together using g++ main.cpp PetSprites.cpp -o main
//Also making sure that we dont redefine the functions somewhere else unless its used in a header file usin inline... -> inline void CatSprite


//Cat Sprites
void catDisplay() {
        static bool frameToggle = true;
        if (frameToggle) {
        // Displaying cat ASCII art!
        std::cout << "    /\\_____/\\   \n"
                     "   /  o   o  \\ meow  \n"
                     "  ( ==  ^  == )   _\n"
                     "   )         (   ) )\n"
                     "  (           ) ( ( \n"
                     " ( (  )   (  ) )   ) \n"
                     "(__(__)___(__)__)  )\n";
        } else {
        std::cout << "    /\\_____/\\   meow \n"
                     "   /  o   o  \\     \n"
                     "  ( ==  ^  == )   _\n"
                     "   )         (  ( (\n"
                     "  (           )  ) ) \n"
                     " ( (  )   (  ) )  ( \n"
                     "(__(__)___(__)__)  )\n";
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
    
    } std::cout << "You fed your cat a yummy fish!\n";
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

void catShower() {
        static bool frameToggle = true;
        if (frameToggle) {
        // Displaying cat ASCII art!
        std::cout << "                      \n"         //if can we should make this text brown
                     "    /\\_____/\\ meow   \n"
                     "   /  -   -  \\     \n"
                     "  ( ==  ^  == )  _\n"
                     "   )         (  ( (\n"
                     "  (           )  ) ) \n"
                     " ( (  )   (  ) )  ( \n"
                     "(__(__)___(__)__)  )\n";
        } else {
        std::cout << "                 meow    \n"
                     "    /\\_____/\\    \n"
                     "   /  o   o  \\        \n"
                     "  ( ==  ^  == )   _\n"
                     "   )         (   ) )\n"
                     "  (           ) ( ( \n"
                     " ( (  )   (  ) )   ) \n"
                     "(__(__)___(__)__) (\n";
        }        

        frameToggle = !frameToggle; //toggles frames

    }



void CatCleaning(int numFrames, int frameDelay) {
    for (int i = 0; i < numFrames; ++i) {
        clearScreen();
        catShower();
        std::cout << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(frameDelay));
    
    } std::cout << "Your cat is all clean!\n";
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
    
    } std::cout << "You fed your dog yummy bones!\n";
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
    
    } std::cout << "Your dog slept all night!\n";
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
    
    } std::cout << "You fed your frog yummy flies!\n";
}


void frogSnooze() {
        static bool frameToggle = true;
        if (frameToggle) {
        // Displaying dog ASCII art!
        std::cout << "                              \n"
                     "         _   _   Z     \n"
                     "        (-)_(-) Z       \n"
                     "     _ (   _   ) _    \n"
                     "    / \\/`-----'\\/ \\   \n"
                     "  __\\ ( (     ) ) /__ \n"
                     "  )   /\\ \\._./ /\\   ( \n"
                     "   )_/ /|\\   /|\\ \\_(    ";
        } else {
        std::cout << "                  Z            \n"
                     "         _   _   Z         \n"
                     "        (-)_(-)       \n"
                     "     _ (   _   ) _    \n"
                     "    / \\/`-----'\\/ \\   \n"
                     "  __\\ ( (     ) ) /__ \n"
                     "  )   /\\ \\._./ /\\   ( \n"
                     "   )_/ /|\\   /|\\ \\_(    ";
        }        

        frameToggle = !frameToggle; //toggles frames

    }

void FrogSleeping(int numFrames, int frameDelay) {
    for (int i = 0; i < numFrames; ++i) {
        clearScreen();
        frogSnooze();
        std::cout << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(frameDelay));
    
    } std::cout << "Your pet slept all night!\n";
}

void frogShower() {
        static bool frameToggle = true;
        if (frameToggle) {
        // Displaying dog ASCII art!
        std::cout << "                              \n"
                     "         _   _        \n"
                     "        (-)_(-)  ribbit       \n"
                     "     _ (   _   ) _    \n"
                     "    / \\/`-----'\\/ \\   \n"
                     "  __\\ ( (     ) ) /__ \n"
                     "  )   /\\ \\._./ /\\   ( \n"
                     "   )_/ /|\\   /|\\ \\_(    ";
        } else {
        std::cout << "                              \n"
                     "         _   _     ribbit       \n"
                     "        (.)_(.)       \n"
                     "     _ (   _   ) _    \n"
                     "    / \\/`-----'\\/ \\   \n"
                     "  __\\ ( (     ) ) /__ \n"
                     "  )   /\\ \\._./ /\\   ( \n"
                     "   )_/ /|\\   /|\\ \\_(    ";
        }        

        frameToggle = !frameToggle; //toggles frames

    }

void FrogCleaning(int numFrames, int frameDelay) {
    for (int i = 0; i < numFrames; ++i) {
        clearScreen();
        frogShower();
        std::cout << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(frameDelay));
    
    } std::cout << "Your pet is all clean!\n";
}





//TESTING CODE//

<<<<<<< HEAD
int main() { ///CODE THAT WILL BE USED IN MAIN CODE
    std::string foodChoice;                            //could be userChoice and then individually doing the eating, sleeping, cleaning, individualy
    std::cout << "Feed you pet? Yes or no?" << std::endl;
    std::cin >> foodChoice;                             //use tolower to make sure its no issues arise
=======
//int main() { ///CODE THAT WILL BE USED IN MAIN CODE
    //std::string foodChoice;                            //could be userChoice and then individually doing the eating, sleeping, cleaning, individualy
    //std::cout << "Feed you pet? Yes or no?" << std::endl;
    //std::cin >> foodChoice;                             //use tolower to make sure its no issues arise
>>>>>>> 36c92c1edf4055b63424b64a54a5adc6ae9df343

    //std::string sleepChoice;
    //std::cout << "Have your pet sleep? Yes or no?" << std::endl;
    //std::cin >> sleepChoice;                    //figure out how to lowercase user input

    //std::string washChoice;
    //std::cout << "Wash your pet? Yes or no?" << std::endl;
    //std::cin >> washChoice; 

<<<<<<< HEAD
if (foodChoice == "yes") {
    CatEating(5, 500);
    //DogEating(5, 500);
    //FrogEating(5, 500);
    
} else {
    CatSprite(5, 500);
    //DogSprite(6, 500);
    //FrogSprite(6, 500);
    std::cout << "You choose not to feed your pet." << std::endl;
}

//if (sleepChoice == "yes") {
    //CatSleeping(6, 500); 
    //DogSleeping(6, 500);
//    FrogSleeping(6, 500);   
//} else{
    //CatSprite(6, 500);
    //DogSprite(6, 500);
    //FrogSprite(6, 500);
//    std::cout << "Your pet did not go to sleep." << std::endl;
//}

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




=======
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
>>>>>>> 36c92c1edf4055b63424b64a54a5adc6ae9df343

//if (sleepChoice == "yes") {
    //CatSleeping(6, 500); 
    //DogSleeping(6, 500);
//    FrogSleeping(6, 500);   
//} else{
    //CatSprite(6, 500);
    //DogSprite(6, 500);
    //FrogSprite(6, 500);
//    std::cout << "Your pet did not go to sleep." << std::endl;
//}

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


//return 0;
//}





