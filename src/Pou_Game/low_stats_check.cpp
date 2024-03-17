#include "Action_Functions/clean.cpp"

void low_stats_check(std::string petName, Bars &petBars) {
  if (petBars.getHunger() <= 30) {
    petBars.decreaseHealthPoints(5);
    color_text(petName + " is starving! -5 Health", 'R');
  }
  if (petBars.getHygiene() <= 30) {
    petBars.decreaseHealthPoints(5);
    color_text(petName + " is filty! -5 Health", 'R');
  }
  if (petBars.getSleep() <= 30) {
    petBars.decreaseHealthPoints(5);
    color_text(petName + " is so tired! -5 Health", 'R');
  }
}

// //TEST FOR low_stats_check
// int main() { 
//     std::string petName = "Mary";
//     Bars testPetBars;

//     std::cout << "TESTING HIGH STAT VALUES (HEALTH = 100)" <<std::endl;
//     testPetBars.setHunger(50);
//     testPetBars.setHygiene(60);
//     testPetBars.setSleep(100);

//     low_stats_check(petName, testPetBars);
//     std::cout << petName << "'s health: " << testPetBars.getHealth() << std::endl;
//     std::cout <<std::endl;

    
//     std::cout << "TESTING LOW STAT VALUES (HEALTH = 85)" <<std::endl;//
//     testPetBars.setHunger(30);
//     testPetBars.setHygiene(0);
//     testPetBars.setSleep(2);

//     low_stats_check(petName, testPetBars);
//     std::cout << petName << "'s health: " << testPetBars.getHealth() << std::endl;
//     std::cout <<std::endl;


//     return 0; }