//***************Documentation section**************//
/*
  @author:Hadeer Omar Saleh
  @address: codsodt_GuessNumber by C++
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));
    int randomNumber = rand() % 100 + 1;        // randomNumber is in the range 1 to 100
    int guessNumber;
    int tries = 0;

    do
    {
        cout << "Guess a number between 1 and 100: ";
        cin >> guessNumber;
        tries++;

        if (guessNumber > randomNumber)
        {
            cout << "Too high! Try again." << endl;
        }
        else if (guessNumber < randomNumber)
        {
            cout << "Too low! Try again." << endl;
        }
        else
        {
            cout << "Congratulations! You guessed the number in " << tries << " tries." << endl;
        }
    } while (guessNumber != randomNumber);

    return 0;
}
