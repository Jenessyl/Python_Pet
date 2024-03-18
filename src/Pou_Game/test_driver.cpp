// TO USE FOR TESTING:
// ---- 1. comment OUT main.cpp
// ---- 2. Comment IN section of code you want to test in test_driver.cpp
// ---- 3. In terminal type "g++ *.cpp -o test_driver"
// ---- 4. Then type "./test_driver"
//=======================================================================

#include "game_loop.h"
#include "bars.h"
#include "clean.h"
#include "hunger.h"
#include "playGame.h"
#include "sleep.h"
#include "low_stats_check.h"
#include "library.h"
#include <iostream>
#include <string>

// // //TESTING ANIMAL FUNCTIONS ========================================
// // DOG TEST SPRITES
// int main() {

//   dogDisplayNormal();
//   dogDisplayEating();
//   dogDisplayCleaning();
//   dogDisplaySleeping();
//   dogDisplayDied();

//   return 0;
// }

// // CAT TEST SPRITES
// int main() {

//   catDisplayNormal();
//   catDisplayEating();
//   catDisplayCleaning();
//   catDisplaySleeping();
//   catDisplayDied();

//   return 0;
// }

// // FROG TEST SPRITES
// int main() {

//   frogDisplayNormal();
//   frogDisplayEating();
//   frogDisplayCleaning();
//   frogDisplaySleeping();
//   frogDisplayDied();

//   return 0;
// }

// // TESTING text_color() =============================================
// int main() {
//   color_text("This is red", 'R');
//   color_text("This is yellow", 'Y');
//   color_text("This is green", 'G');
//   color_text("This is blue", 'B');
//   color_text("This is hazel", 'H');
//   return 0;
// }

// // TESTING displayWin()/displayDeath() ENDINGS ======================
// int main() {
//     displayWin("Tony", "7", 'a');
//     return 0;
// }

// int main() {
//     displayDeath("Tony", "7", 'b');
//     return 0;
// }

// // TESTS FOR BAR CLASS ===============================================
// int main() {
//     // Create an instance of the Bars class
//     Bars petBars;

//     // Test setting and getting values
//     petBars.setHealth(90);
//     std::cout << "Health: " << petBars.getHealth() << std::endl;

//     // Test increasing and decreasing all points
//     petBars.decreasePoints(10);
//     std::cout << "Points after decrease: " << std::endl;
//     petBars.barStatus();

//     petBars.increasePoints(15);
//     std::cout << "Increased points: " << std::endl;
//     petBars.barStatus();

//     // Test specific attribute functions
//     petBars.decreaseHealthPoints(20);
//     std::cout << "Decreased health points: " << std::endl;
//     petBars.barStatus();

//     petBars.increaseHappinessPoints(10);
//     std::cout << "Increased happiness points: " << std::endl;
//     petBars.barStatus();

//     return 0;
// }

// //TEST FOR low_stats_check() ========================================
// int main() {
//     std::string petName = "Mary";
//     Bars testPetBars;

//     std::cout << "TESTING HIGH STAT VALUES (HEALTH = 100)" <<std::endl;
//     testPetBars.setHunger(50);
//     testPetBars.setHygiene(60);
//     testPetBars.setSleep(100);

//     low_stats_check(petName, testPetBars);
//     std::cout << petName << "'s health: " << testPetBars.getHealth() <<
//     std::endl; std::cout <<std::endl;

//     std::cout << "TESTING LOW STAT VALUES (HEALTH = 85)" <<std::endl;//
//     testPetBars.setHunger(30);
//     testPetBars.setHygiene(0);
//     testPetBars.setSleep(2);

//     low_stats_check(petName, testPetBars);
//     std::cout << petName << "'s health: " << testPetBars.getHealth() <<
//     std::endl; std::cout <<std::endl;

//     return 0; }

// // //TESTING ACTION FUNCTIONS ========================================
// // TESTING playGame() FOR RANDOMIZED SCENARIOS
// int main() {
//   Bars testBars;
//   std::string name = "sally";
//   playGame(name, testBars, 'a');

//   return 0;
// }

// // TESTING clean_action() FOR RANDOMIZED SCENARIOS
// int main() {

//   Bars testBars;
//   clean_action("David", testBars, 'a');
//   clean_action("Runt", testBars, 'b');
//   clean_action("Michelle", testBars, 'c');
//   clean_action("Josh", testBars, 'c');

//   return 0;
// }

// // TESTING sleep() FOR RANDOMIZED SCENARIOS
// int main() {

//   Bars testBars;
//   sleep("David", testBars, 'a');
//   sleep("Runt", testBars, 'b');
//   sleep("Michelle", testBars, 'c');
//   sleep("Josh", testBars, 'c');

//   return 0;
// }

// // TESTING feed() FOR RANDOMIZED SCENARIOS
// int main() {

//   Bars testBars;
//   feed("David", testBars, 'a');
//   feed("Runt", testBars, 'b');
//   feed("Michelle", testBars, 'c');

//   feed("Josh", testBars, 'c');

//   return 0;
// // }