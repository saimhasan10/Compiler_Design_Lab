#include <iostream>
using namespace std;

int main()
{
    string text;

    cout << "Enter a line of code: ";
    getline(cin, text);

    // Check for single-line comment
    if (text.find("//") != -1)
    {
        cout << "Single-line comment found." << endl;
    }

    // Check for multi-line comment
    else if (text.find("/*") != -1 || text.find("*/") != -1)
    {
        cout << "Multi-line comment found." << endl;
    }

    else
    {
        cout << "No comment found." << endl;
    }

    return 0;
}