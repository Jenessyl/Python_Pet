#include <string>
#include "hunger.h"
#include "clean.h"
#include "playGame.h"
#include "sleep.h"
#include "game_loop.h"
#include "library.h"
#include "bars.h"
#include "low_stats_check.h"


void game_loop(std::string petName) {
    bool outerFlag = true;
    int day = 1;
    int moves;
    bool deathFlag = false;
    char actionChoice;
    Bars petBars;

    while (outerFlag == true) {
        color_text("======================================", 'B');
        // Day counter
        std::string CombinedString1 = "DAY " + std::to_string(day);
        color_text(CombinedString1, 'B');
        


        // std::cout << "affection " << affection << std::endl;
        std::cout << "" << std::endl;
        moves = 2; //Daily move replenish        
        
        //Action selection
        while (moves > 0) {
          //Display Bar values
          petBars.barStatus();
          std::cout << std::endl;

          color_text("What would would you like to do?", 'Y');
          std::string CombinedString2 = "Amount of moves left: " + std::to_string(moves);
          color_text(CombinedString2, 'Y');
          bool actionFlag = true;

          do {
            std::cout << "a) Play" << std::endl
                << "b) Feed" << std::endl
                << "c) Clean" << std::endl
                << "d) Sleep" << std::endl
                << "Your Choice: ";
            std::cin >> actionChoice;
            std::cout << std::endl;

            if ((actionChoice != 'a') && (actionChoice != 'b') && (actionChoice != 'c') && (actionChoice != 'd')) {
                color_text("INVALID ENTRY: VALID INPUTS INCLUDE \"a\", \"b\", \"c\", or \"d\"", 'R');
                std::cout << std::endl;
            } else {
                switch(actionChoice) {
                    case 'a':
                        // call play function
                        color_text("〰〰〰〰〰〰〰〰〰〰〰〰〰〰〰〰〰〰〰", 'C');
                        color_text("👾 🕹️ WELCOME TO THE GUESSING GAME! 🕹️ 👾", 'G');
                        color_text("〰〰〰〰〰〰〰〰〰〰〰〰〰〰〰〰〰〰〰", 'C');  

                        playGame(petName, petBars, 0, 10, 0);

                        std::cout << std::endl;
                        petBars.increaseHappinessPoints(5);
                        color_text("❥ " + petName + " thanks you for playing with it ❥", 'C');
                        color_text("Happiness +5", 'G');
                        std::cout << std::endl;

                        actionFlag = false;  
                        moves -= 1;     
                        break;

                    case 'b':
                        feed(petName, petBars);
                        actionFlag = false;
                        moves -= 1;           
                        break;

                    case 'c':
                        clean_action(petName, petBars);                      actionFlag = false; 
                        moves -= 1;                           
                        break;

                    case 'd':
                        sleep(petName, petBars);  
                        actionFlag = false;
                        moves -= 1;        
                        break;

                    default:
                        break;
                }//switch end
            }//else end
          } while (actionFlag == true);
        low_stats_check(petName, petBars);
        }//Daily end

    day += 1;
    
    //Check win & lose conditions
    //Lose
    if (petBars.getHealth() <= 0){
        displayDeath(petName, std::to_string(day));
        deathFlag = true;
        outerFlag = false;
    }

    //Win
    if ((petBars.getHappiness() >= 100) && (deathFlag == false)){
      displayWin(petName, std::to_string(day));
      outerFlag = false;
    }

    }//Outerflag end
}//MAIN END
