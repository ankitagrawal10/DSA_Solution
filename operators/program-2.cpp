#include <iostream>
using namespace std;

int main()
{
    int i = 7;
    cout << (++i) << endl;
    cout << (i++) << endl;
    cout << (i--) << endl;
    cout << (--i) << endl;

    int a, b = 1;
    a = 10;
    if (++a)
    {
        cout << b;
    }
    else
    {
        cout << ++b;
    }
}