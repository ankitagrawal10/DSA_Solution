#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter your number" << endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int space = n + i - 5; space; space--)
        {
            cout << " ";
        }
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << "*"
                 << " ";
        }
        cout << endl;
    }
}