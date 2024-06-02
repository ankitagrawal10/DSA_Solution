#include <iostream>
using namespace std;

int fib(int n)
{
    int a = 0;
    int b = 1;
    cout << a << " " << b << " ";
    // int nexttrem = a+b;
    for (int i = 2; i < n; i++)
    {
        int nexttrem = a + b;
        a = b;
        b = nexttrem;
        cout << nexttrem << " ";
    }
}

int nth(int a)
{
    if (a <= 1)
    {
        return a;
    }
    return nth(a - 1) + nth(a - 2);
}

int main()
{
    int n, a;
    cout << "enter your number" << endl;
    cin >> n >> a;
    fib(n);
    cout << endl;
    nth(a);
    cout << nth(a - 1) + nth(a - 2) << endl;
    return 0;
}