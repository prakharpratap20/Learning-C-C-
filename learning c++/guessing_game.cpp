#include <iostream>

using namespace std;

int main () {
    int secretNum = 7;
    int guess;
    int guessCount = 0;
    int guessLimit = 3;
    bool outOfGueses = false;
    
    while (secretNum != guess && !outOfGueses){
        if (guessCount < guessLimit) {
            cout << "Enter a guess: ";
            cin >> guess;
            guessCount++;
        } else {
            outOfGueses = true;
        }
    }
    
    if (outOfGueses) {
        cout << "You Lose!";
    } else {
        cout << "You Win!";
    }
    cout << "You Win!";

    return 0;
}