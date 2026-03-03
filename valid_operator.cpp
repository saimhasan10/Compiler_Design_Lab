#include <iostream>
using namespace std;

int main()
{
    char op;
    cout << "Enter a character: ";
    cin >> op;

    // Check if the character is a C++ operator
    if (op == '+' || op == '-' || op == '*' || op == '/' || op == '%' ||
        op == '=' || op == '<' || op == '>' || op == '!' || op == '&' ||
        op == '|' || op == '^' || op == '~')
    {
        cout << "Valid Operator" << endl;
    }
    else
    {
        cout << "Not an Operator" << endl;
    }

    return 0;
}