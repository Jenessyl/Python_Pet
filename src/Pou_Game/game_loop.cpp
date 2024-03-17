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
        std::string dayString = "DAY ";
        // std::cout << "DAY " << day << std::endl;
        std::string dayNumString = std::to_string(day);
        std::string CombinedString1 = dayString + dayNumString;
        color_text(CombinedString1, 'B');
        
        //bar values
        std::cout << "affection " << affection << std::endl;
        std::cout << "" << std::endl;
        moves = 2; //daily move replenish
        while (moves > 0) {
          std::cout << "What would would you like to do?" << std::endl;
          std::cout << "Amount of moves left: " << moves << std::endl; 
          std::cout << "a) Play" << std::endl
            << "b) Feed" << std::endl
            << "c) Clean" << std::endl
            << "d) Sleep" << std::endl
            << "Your Choice: ";
          std::cin >> actionChoice;
          std::cout << std::endl;
            //action switch case
          moves -= 1;
          affection += 25;


        }//Daily end

    day += 1;
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