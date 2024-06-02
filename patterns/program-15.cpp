#include <iostream>
using namespace std;
// incorrect solution for this pattern , so the solution of this pattern is
// D
// C D
// B C D
// A B C D
int main()
{
    int n;
    cout << "enter your number" << endl;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            char start = 'A' + n - i;

            cout << start;
            start = start + 1;
        }
        cout << endl;
    }
    return 0;
}