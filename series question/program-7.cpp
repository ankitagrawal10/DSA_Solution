#include <iostream>
using namespace std;

int ap(int n)
{
    int nth = 3 * n + 7;
    cout << nth << endl;
}

int main()
{
    int n;
    cout << "enter your number" << endl;
    cin >> n;
    ap(n);
    return 0;
    // cout<<nth;
}