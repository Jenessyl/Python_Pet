#include "PetSprites.h"
#include "Pet.h"

int main() { ///CODE THAT WILL BE USED IN MAIN CODE
    std::string foodChoice;                            //could be userChoice and then individually doing the eating, sleeping, cleaning, individualy
    std::cout << "Feed you pet? Yes or no?" << std::endl;
    std::cin >> foodChoice;                             //use tolower to make sure its no issues arise

    //std::string sleepChoice;
    //std::cout << "Have your pet sleep? Yes or no?" << std::endl;
    //std::cin >> sleepChoice;                    //figure out how to lowercase user input

    //std::string washChoice;
    //std::cout << "Wash your pet? Yes or no?" << std::endl;
    //std::cin >> washChoice; 

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