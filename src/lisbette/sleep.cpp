#include "sleep.h"
#include <iostream>
#include <ostream>
#include <chrono>
#include <thread>
#include <cstdlib>

// Puts the pet to sleep and provides updates while the pet sleeps. parameter should be pet object, for now its a string
void sleep(std::string pet) { 
    std::cout << "Goodnight! Your pet is going to sleep.\n" << std::endl;
    
    int sleepProgress = 0;    
    while (sleepProgress < 100) {
        std::this_thread::sleep_for(std::chrono::milliseconds(100)); 
        sleepProgress += 25; 
        std::cout << "Sleeping... Progress: " << sleepProgress << "%" << std::endl;
    }
    std::cout << pet << " woke up!" << std::endl;

    // chooses a random integer from 1-4
    std::cout << (rand() % 5) << std::endl;
    std::cout << (rand() % 5) << std::endl;
    std::cout << (rand() % 5) << std::endl;




    //show sleeping sprite

    // random chance scenario >> increase affection or decrease health
    // 3 random chance scenarios using random    

    // Your pet had a great night of sleep.
    // Your pet is feeling well rested.
    // Your pet woke up feeling sick. Oh no!
    // Your pet was tossing & turning all night.
    
    

    //lower daily counter

    //increase energy bar

    //increase affection









    
    }



int main() {
    std::string pet = "Pou";
    sleep(pet);
    return 0;
}
