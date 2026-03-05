#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of productions: ";
    cin >> n;
    cin.ignore();

    string productions[n];

    cout << "Enter the productions (example: E->T+E):\n";
    for (int i = 0; i < n; i++)
    {
        getline(cin, productions[i]);
    }

    cout << "\nGrammar Productions:\n";
    for (int i = 0; i < n; i++)
        cout << productions[i] << endl;

    // Simulated FIRST sets
    cout << "\nSimulated FIRST Sets:\n";
    cout << "FIRST(E) = { (, i }\n";
    cout << "FIRST(T) = { (, i }\n";
    cout << "FIRST(F) = { (, i }\n";

    // Simulated FOLLOW sets
    cout << "\nSimulated FOLLOW Sets:\n";
    cout << "FOLLOW(E) = { ), $ }\n";
    cout << "FOLLOW(T) = { +, ), $ }\n";
    cout << "FOLLOW(F) = { *, +, ), $ }\n";

    return 0;
}