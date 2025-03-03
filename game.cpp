#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
void playGame() {
    srand(time(0));
    int number = rand() % 100 + 1;
    int guess;
    int attempts = 0;
    
    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "I have selected a number between 1 and 100. Try to guess it!" << endl;
    do {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;
        if (guess > number) {
            cout << "Too high! Try again." << endl;
        } else if (guess < number) {
            cout << "Too low! Try again." << endl;
        } else {
            cout << "Congratulations! You guessed the number in " << attempts << " attempts." << endl;
        }
    } while (guess != number);
}
int main() {
    char choice;
    do {
        playGame();
        cout << "Do you want to play again? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');
    cout << "Thanks for playing!" << endl;
    return 0;
}