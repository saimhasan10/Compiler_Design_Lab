// recognize string under a star b plus(a *b +)

#include <iostream>
using namespace std;

int main()
{
    string str;
    cout << "Enter string: ";
    cin >> str;

    int i = 0, n = str.length();

    // First a*
    while (i < n && str[i] == 'a')
        i++;

    // First b+
    if (i == n || str[i] != 'b')
    {
        cout << "Not Accepted" << endl;
        return 0;
    }
    while (i < n && str[i] == 'b')
        i++;

    // Second a*
    while (i < n && str[i] == 'a')
        i++;

    // Second b+
    if (i == n || str[i] != 'b')
    {
        cout << "Not Accepted" << endl;
        return 0;
    }
    while (i < n && str[i] == 'b')
        i++;

    // If everything is used, accept
    if (i == n)
        cout << "Accepted" << endl;
    else
        cout << "Not Accepted" << endl;

    return 0;
}