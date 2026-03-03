#include <iostream>
using namespace std;

int main()
{
    string text;
    int spaces = 0, tabs = 0, lines = 0;

    cout << "Enter text (press Ctrl + Z and Enter to stop):\n";

    while (getline(cin, text))
    {
        lines++; // Count each line

        for (int i = 0; i < text.length(); i++)
        {
            if (text[i] == ' ')
                spaces++; // Count spaces
            else if (text[i] == '\t')
                tabs++; // Count tabs
        }
    }

    cout << "\nNumber of lines: " << lines << endl;
    cout << "Number of spaces: " << spaces << endl;
    cout << "Number of tabs: " << tabs << endl;

    return 0;
}