#include <iostream>
using namespace std;
#include <string>
#include <cstdlib>
#include <cmath>

int main()
{
    float num1 = 1;
    float num2 = 1;
    char operation;
    float result;
    cout << "\n\n\n\t\t\t\tWELCOME TO CALCULATOR\t\t\t" << endl;

    cout << "\n\t\t\t\tEnter The number you want to form operation on : ";
    cin >> num1;

    cout << "\t\t\t\tEnter The number you want to form operation on : ";
    cin >> num2;

    if (!isdigit(num1) && !isdigit(num2))
    {

        cout << "\n\t\t\t\tEnter operation you want to perform (+ , - , * , % , /) : ";
        cin >> operation;
        switch (operation)
        {
        case '+':
            result = num1 + num2;
            cout << "\n\t\t\t\tThe result is of " << num1 << " " << operation << " " << num2 << " is " << result << endl;
            break;
        case '-':
            result = num1 - num2;
            cout << "\n\t\t\t\tThe result is of " << num1 << " " << operation << " " << num2 << " is " << result << endl;
            break;
        case '*':
            result = num1 * num2;
            cout << "\n\t\t\t\tThe result is of " << num1 << " " << operation << " " << num2 << " is " << result << endl;
            break;
        case '/':
            if (num2 == 0)
            {
                cout << "\n\t\t\t\tThe denomenator can't be zero " << endl;
            }
            else
            {
                result = num1 / num2;
                cout << "\n\t\t\t\tThe result is of " << num1 << " " << operation << " " << num2 << " is " << result << endl;
            }
            break;
        case '%':
            if (num2 == 0)
            {
                cout << "\n\t\t\t\tThe denomenator can't be zero " << endl;
            }
            else
            {
                result = fmod(num1, num2);
                cout << "\n\t\t\t\tThe result is of " << num1 << " " << operation << " " << num2 << " is " << result << endl;
            }
            break;
        default:
            cout << "\n\t\t\t\tINVALID INPUT ";
            return 0;
        }
    }
    else
    {
        cout << "\n\t\t\t\tINVALID INPUT ";
        return 0;
    }
    return 1;
}
