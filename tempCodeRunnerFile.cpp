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