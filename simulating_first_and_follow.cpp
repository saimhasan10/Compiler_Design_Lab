#include <iostream>
using namespace std;

int main()
{
    char nonTerminals[] = {'E', 'T', 'F'}; // Example non-terminals
    string productions[] = {
        "E->T+E", // E -> T+E
        "E->T",   // E -> T
        "T->F*T", // T -> F*T
        "T->F",   // T -> F
        "F->(E)", // F -> (E)
        "F->i"    // F -> i (identifier)
    };

    cout << "Grammar Productions:\n";
    for (int i = 0; i < 6; i++)
        cout << productions[i] << endl;

    cout << "\nSimulated FIRST Sets:\n";
    cout << "FIRST(E) = { (, i }\n";
    cout << "FIRST(T) = { (, i }\n";
    cout << "FIRST(F) = { (, i }\n";

    cout << "\nSimulated FOLLOW Sets:\n";
    cout << "FOLLOW(E) = { ), $ }\n";
    cout << "FOLLOW(T) = { +, ), $ }\n";
    cout << "FOLLOW(F) = { *, +, ), $ }\n";

    return 0;
}