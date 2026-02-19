
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

void game() {
    int luckyNum;
    int guess=0;

    srand(time(0));
    luckyNum = rand() % 101;

    cout << "GUESS A RANDOMLY CHOSEN NUMBER BETWEEN 0-100 " << endl;
    while (guess != luckyNum) {
        cout << endl;
        cout << " Enter your guess: " << endl;
        cin >> guess;

        if (guess > luckyNum) {
            cout << " Your guesss is too Big, a bit lower... " << endl;
        }
        else if (guess < luckyNum) {
            cout << " Your guesss is too small, a bit Higher...  " << endl;
        }
        else{
            cout << "WELL DONE, YOU GUESSED CORRECT :) !!! " << endl;
        }
        
    }
    cout << endl;
    int again;
    cout << "Play Again? - 1, exit - 0 " << endl;
    cin >> again;
    if (again == 1) {
        game();
    }
    else {
       
    }
   
}

int main(){
    int pick;
    cout << "Play Game? - 1, Quit - 0 " << endl;
    cin >> pick;
    switch (pick) {
    case 0:
        return 0;
    case 1:
        game();
        break;
    }

    

    
}

