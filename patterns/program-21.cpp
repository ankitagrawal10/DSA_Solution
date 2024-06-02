#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter your no." << endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << j << " ";
        }

        for (int col = 1; col <= 2 * i - 2; col++)
        {
            cout << "*"
                 << " ";
        }

        for (int coloumn = n - i + 1; coloumn >= 1; coloumn--)
        {

            cout << coloumn << " ";
        }

        cout << endl;
    }
    return 0;
}
