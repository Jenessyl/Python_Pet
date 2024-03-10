#include <string>
#include <iostream>
#include <random>

void clean_action(std::string pet_name) {
    int ScenarioNum

    std::cout << "It is bathtime!" << std::endl;
    //show sprite of bathtime
    
    //Generating a random scenario
    std::random_device dev;
    std::mt19937 rng(dev());
    std::uniform_int_distribution<std::mt19937::result_type> RandNum(1,4);
    std::cin >> ScenarioNum;

    switch(ScenarioNum) {
        case 1:
            std::cout << pet_name << " was extra relaxed and played with bubbles." << std::endl;
            break;
        case 2:
            std::cout << pet_name << " feels pampered and clean." << std::endl;
            break;
        case 3:
            std::cout << pet_name << " broke its ankle getting out of the bath." << std::endl;
            break;
        case 4:
            std::cout << pet_name << " got soap in its eyes. Ouch!" << std::endl;
            break;

    }

    // random chance scenario >> increase affection or decrease health
    // 3 random chance scenarios using random
       // Your pet was extra relaxed and played with bubbles.
       // Your pet feels pampered and clean.
       // Your pet broke its ankle getting out of the bath.
       // Your pet got soap in its eyes. Ouch!     

    //lower daily counter

    //increase clean bar

    //increase affection

}