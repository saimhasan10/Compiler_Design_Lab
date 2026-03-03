#include <iostream>
using namespace std;

int main()
{
    string word;

    cout << "Enter a word: ";
    cin >> word;

    // List of some common C++ keywords
    string keywords[] = {
        "int", "float", "double", "char", "if", "else",
        "while", "for", "return", "void", "class",
        "public", "private", "protected", "static"};

    int size = sizeof(keywords) / sizeof(keywords[0]);
    bool isKeyword = false;

    // Check if word matches any keyword
    for (int i = 0; i < size; i++)
    {
        if (word == keywords[i])
        {
            isKeyword = true;
            break;
        }
    }

    if (isKeyword)
        cout << "It is a Keyword" << endl;
    else
        cout << "Not a Keyword" << endl;

    return 0;
}