#include <iostream>
#include <ctime>

//This function ativates the clean action
void clean_action(std::string petName) {
    std::cout << "==============================" << std::endl;
    std::cout << "｡ﾟ It is bathime! ｡ﾟ" << std::endl;
    std::cout << "==============================" << std::endl;
    //show sprite of bathtime
    
    //Generating a random scenario
    int ScenarioNum;
    ScenarioNum = (rand() % 5); //

    std::cout << "ScenarioNum = " << ScenarioNum << std::endl;

    switch(ScenarioNum) {
        case 0:
            std::cout << petName << " was extra relaxed and played with bubbles." << std::endl;
            break;
        case 1:
            std::cout << petName << " feels pampered and clean." << std::endl;
            break;
        case 2:
            std::cout << petName << " broke its ankle getting out of the bath." << std::endl;
            break;
        case 3:
            std::cout << petName << " got soap in its eyes. Ouch!" << std::endl;
            break;
    }
    std::cout << "" << std::endl;


    switch(ScenarioNum) {
        case 0:
            std::cout << petName << " was extra relaxed and played with bubbles." << std::endl;
            break;
        case 1:
            std::cout << petName << " feels pampered and clean." << std::endl;
            break;
        case 2:
            std::cout << petName << " broke its ankle getting out of the bath." << std::endl;
            break;
        case 3:
            std::cout << petName << " got soap in its eyes. Ouch!" << std::endl;
            break;
    }
    std::cout << "" << std::endl;


  // lower daily counter

  // increase clean bar

  // increase affection
}
