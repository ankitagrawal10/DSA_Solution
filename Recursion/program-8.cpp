#include <iostream>
using namespace std;

void printdigit(int n)
{
    if (n == 0)
    {
        return;
    }

    printdigit(n / 10);
    int digit = n % 10;
    cout << digit << " ";
}
int main()
{
    int n = 647;
    printdigit(n);
}