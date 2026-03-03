#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    string id;

    cout << "Enter an identifier: ";
    cin >> id;

    // First character must be letter or underscore
    if (!(isalpha(id[0]) || id[0] == '_'))
    {
        cout << "Invalid Identifier" << endl;
        return 0;
    }

    // Remaining characters must be letter, digit or underscore
    for (int i = 1; i < id.length(); i++)
    {
        if (!(isalnum(id[i]) || id[i] == '_'))
        {
            cout << "Invalid Identifier" << endl;
            return 0;
        }
    }

    cout << "Valid Identifier" << endl;

    return 0;
}