#include <iostream>
#include <string>
using namespace std;

int main()
{
    string expr;
    cout << "Enter a simple arithmetic expression (e.g., a+b*c): ";
    cin >> expr;

    int temp = 1; // Temp variable counter

    cout << "\nGenerated Intermediate Code (Three-Address Code):\n";

    // Simple simulation: handle only expressions of type a+b*c
    // This is just a demonstration
    for (int i = 0; i < expr.length(); i++)
    {
        if (expr[i] == '*' || expr[i] == '/')
        {
            cout << "t" << temp << " = " << expr[i - 1] << " " << expr[i] << " " << expr[i + 1] << endl;
            expr[i + 1] = 't' + to_string(temp)[0]; // Replace next variable with temp
            temp++;
        }
    }

    for (int i = 0; i < expr.length(); i++)
    {
        if (expr[i] == '+' || expr[i] == '-')
        {
            cout << "t" << temp << " = " << expr[i - 1] << " " << expr[i] << " " << expr[i + 1] << endl;
            temp++;
        }
    }

    return 0;
}