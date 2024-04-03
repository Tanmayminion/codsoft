//C++ program for NUMBER GUESSING GAME
#include <iostream>

using namespace std;

int main()
{


    // Generate a random number between 1 and 50 (you can adjust the range as needed)
    int secretNumber = rand() % 50 + 1;

    // Initialize the number of tries
    int tries = 0;

    cout << "Welcome to the Guess the Number Game!" << endl;
    cout << "I'm thinking of a number between 1 and 50. Can you guess it?" << endl;

    while (true)
    {
        int guess;
        cout << "Enter your guess: ";
        cin >> guess;

        // Increment the number of tries
        tries++;

        // Check if the guess is correct
        if (guess == secretNumber)
        {
            cout << "Congratulations! You guessed the number " << secretNumber << " correctly in " << tries << " tries." << endl;
            break;
        }
        else if (guess < secretNumber)
        {
            cout << "Too low. Try again." << endl;
        }
        else
        {
            cout << "Too high. Try again." << endl;
        }
    } // end of while loop.

    return 0;
}