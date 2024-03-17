#include "library.cpp"
#include <string>

void game_loop() {
    bool outerFlag = true;
    int day = 1;
    int moves;
    int affection = 0;
    char actionChoice;

    while (outerFlag == true) {
        color_text("======================================", 'B');
        // Day counter
        std::string CombinedString1 = "DAY " + std::to_string(day);
        color_text(CombinedString1, 'B');
        
        //Display Bar values
        std::cout << "affection " << affection << std::endl;
        std::cout << "" << std::endl;
        moves = 2; //Daily move replenish
        
        //Action selection
        while (moves > 0) {
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
                        actionFlag = false;  
                        moves -= 1;
                        affection += 25;        
                        break;

                    case 'b':
                        // call feed function  
                        actionFlag = false;
                        moves -= 1;
                        affection += 25;             
                        break;

                    case 'c':
                        // call clean function  
                        actionFlag = false; 
                        moves -= 1;
                        affection += 25;                               
                        break;

                    case 'd':
                        // call sleep function    
                        actionFlag = false;
                        moves -= 1;
                        affection += 25;         
                        break;

                    default:
                        break;
                }//switch end
            }//else end
          } while (actionFlag == true);
        }//Daily end

    day += 1;
    
    //Check win & lose conditions
    if (affection >= 100){
      displayWin("Tony");
      outerFlag = false;
    }//affection check end
    else{        
    }
    }//Outerflag end
}//ENDEND

// int main() {
//     game_loop();
// }