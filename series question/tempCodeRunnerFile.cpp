#include <iostream>
using namespace std;

int setbit(int a, int b)
{
    int count = 0;
    while (a != 0 && b != 0)
    {
        if (a & 1 || b & 1)
        {
            count++;
        }
        a = a >> 1;
        b = b >> 1;
        int add = a+b;
    }
    return count;
}

int main()
{
    int a, b;
    cout << "enter your number" << endl;
    cin >> a >> b;
    cout << setbit(a, b);
    return 0;
}

