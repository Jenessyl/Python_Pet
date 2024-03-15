#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void playGuessingGame() {
    srand(time(0)); 
    int secretNumber = rand() % 100 + 1; 
    int attempts = 5; 
    cout << "I've thought of a number between 1 and 100.\nCan you guess it? You have " << attempts << " attempts." << endl;

    int low = 1;
    int high = 100;
    
    while (attempts > 0) {
        int mid = (low + high) / 2;
        cout << "Is it " << mid << "? (1: Too high, 2: Too low, 3: Correct): ";
        int response;
        cin >> response;

        if (response == 3) {
            cout << "Congratulations! You've guessed the correct number!" << endl;
            return;
        } else if (response == 1) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
        attempts--;
    }

    cout << "Sorry, you've run out of attempts. The correct number was " << secretNumber << endl;
}

int main() {
    playGuessingGame(); 
    return 0;
}
