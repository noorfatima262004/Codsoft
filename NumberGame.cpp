#include <iostream>
using namespace std;
#include <string>
#include <cstdlib>
#include <ctime>

int main()
{
    int random;
    srand(time(0));
    random = rand() % 100 + 1;
    int guess = 0;
    int num = 0;
    string choice;
    int count = 5;
    cout << random;
    cout << "\n\n\n\t\t\t\tWELCOME TO NUMBER GAME\t\t\t" << endl;
    cout << "\n\n\t\t\t\tA Random Number is Generated" << endl;
    cout << "\t\t\t\tIf you want to guess Random Number, click 1." << endl;
    cout << "\t\t\t\tOtherWise Press any button  : ";
    cin >> choice;

    if (choice == "1")
    {

        while (true)
        {
            cout << "\n\n\t\t\t\tYou Have " << count << " Attempts to Guess the right number." << endl;
            cout << "\t\t\t\tGuess the random Number Generator : ";
            cin >> num;
            guess++;
            count--;

            if (num == random)
            {
                cout << "\n\t\t\t\tYou guessed correctly." << endl;
                cout << "\n\t\t\t\tYou Guessed the Correct Random-Number " << random << " in " << guess << " Attempts" << endl;
                break;
            }
            else if (num > random)
            {
                cout << "\n\t\t\t\tYour guess is too big." << endl;
            }
            else if (num < random)
            {
                cout << "\n\t\t\t\tYour guess is too small." << endl;
            }
            else
            {
                cout << "\n\t\t\t\tInvalid input." << endl;
            }

            if (count <= 0)
            {
                cout << "\n\t\t\t\tYou Could not guess the Random-Number " << random << " in 5 Attempts" << endl;
                break;
            }
        }
    }
    else
    {
        exit(0);
    }
}
