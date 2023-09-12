#include <iostream>
using namespace std;
#include <fstream>

int main()
{
    string fileName;
    fstream file;

    int Count = 0;
    string word;

    cout << "Enter the full name of file : ";
    getline(cin, fileName);

    file.open(fileName, ios::in);

    if (!file)
    {
        cout << "Error opening the file." << endl;
        return 0;
    }

    // while (file >> word)
    // {
    //     Count++;
    // }
    while(getline(file, word))
    {
        Count++;
    }

    cout << "Total word count: " << Count << endl;
    return 1;

    file.close();
}
