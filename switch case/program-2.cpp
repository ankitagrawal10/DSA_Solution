#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "enter the values" << endl;
    cin >> a >> b;
    char ch;
    cin >> ch;
    switch (ch)
    {
    case '+':
        cout << (a + b) << endl;
        break;
    case '-':
        cout << (a - b) << endl;
        break;
    case '*':
        cout << (a * b) << endl;
        break;
    case '/':
        cout << (a / b) << endl;
        break;
    case '%':
        cout << (a % b) << endl;
        break;
    default:
        cout << "invalid expression" << endl;
    }
}