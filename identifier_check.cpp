#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    string id;

    cout << "Enter an identifier: ";
    cin >> id;

    // List of some C++ keywords
    string keywords[] = {
        "int", "float", "double", "char", "if", "else", "while", "for",
        "return", "void", "class", "public", "private", "protected",
        "static", "switch", "case", "break", "continue"};

    int keySize = sizeof(keywords) / sizeof(keywords[0]);

    // Check if it is a keyword
    for (int i = 0; i < keySize; i++)
    {
        if (id == keywords[i])
        {
            cout << "Invalid Identifier (It is a Keyword)" << endl;
            return 0;
        }
    }

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