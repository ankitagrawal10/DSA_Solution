#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter your number" << endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int space = n - i; space; space--)
        {
            cout << " ";
        }
        for (int j = 1; j <= n; j++)
        {
            cout << "*"
                 << " ";
        }
        cout << endl;
    }
}