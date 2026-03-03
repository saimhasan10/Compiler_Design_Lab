#include <iostream>
using namespace std;

int main()
{
    string text;
    cout << "Enter a string: ";
    getline(cin, text);

    int freq[256] = {0}; // Array to store frequency of ASCII characters

    // Count frequency of each character
    for (int i = 0; i < text.length(); i++)
    {
        freq[text[i]]++; // Increase count using ASCII value as index
    }

    cout << "\nCharacter Frequencies:\n";

    // Print characters that appeared
    for (int i = 0; i < 256; i++)
    {
        if (freq[i] > 0)
        {
            cout << char(i) << " : " << freq[i] << endl;
        }
    }

    return 0;
}