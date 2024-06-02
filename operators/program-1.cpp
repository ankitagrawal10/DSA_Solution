#include <iostream>
using namespace std;

int main()
{
    int a = 2;

    int b = 3;
    int c = 5;
    int d = 7;
    cout << "a&b"
         << " " << (a & b) << endl;
    cout << "a|c"
         << " " << (a | c) << endl;
    cout << "~a"
         << " " << ~a << endl;
    cout << "c^d"
         << " " << (c ^ d) << endl;

    cout << (5 << 1) << endl;
    cout << (5 >> 2) << endl;
    return 0;
}