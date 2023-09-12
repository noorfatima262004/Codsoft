#include <iostream>
using namespace std;

int main()
{
    float num1;
    char operation;
    float result = 0; // Initialize result to 0

    cout << "\n\n\n\t\t\t\tWELCOME TO CALCULATOR\t\t\t" << endl;

    cout << "\n\t\t\t\tEnter The number you want to perform operations on: ";
    cin >> num1;

    cout << "\n\t\t\t\tEnter the operation you want to perform (+, -, *, /): ";
    cin >> operation;

    for(int x = 0; x < num1 ; x++)
    {
        float num2;

        cout << "\n\t\t\t\tEnter The number you want to perform the operation on (or 0 to exit): ";
        cin >> num2;

        if (num2 == 0)
            break;

        switch (operation)
        {
        case '+':
            result += num2;
            break;
        case '-':
            result -= num2; // Subtract num2 from the current result
            break;
        case '*':
            result *= num2;
            break;
        case '/':
            if (num2 == 0)
            {
                cout << "\n\t\t\t\tThe denominator can't be zero " << endl;
            }
            else
            {
                result /= num2;
            }
            break;
        default:
            cout << "\n\t\t\t\tINVALID INPUT ";
            return 1;
        }

        cout << "\n\t\t\t\t\t\t\tRESULT = " << result << endl;
    }

    return 0;
}
