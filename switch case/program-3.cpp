#include <iostream>
using namespace std;
int main()
{
    int amount;
    cout << "enter your amount" << endl;
    cin >> amount;
    int n2000, n500, n200, n100, n50, n20, n10, n5;
    n2000 = n500 = n200 = n100 = n50 = n20 = n10 = n5 = 0;

    switch (amount >= 2000)
    {
    case 1:
        n2000 = amount / 2000;
        amount = amount % 2000;
        break;
    }

    switch (amount >= 500)
    {
    case 1:
        n500 = amount / 500;
        amount = amount % 500;
        break;
    }

    switch (amount >= 200)
    {
    case 1:
        n200 = amount / 200;
        amount = amount % 200;
        break;
    }
    switch (amount >= 100)
    {
    case 1:
        n100 = amount / 100;
        amount = amount % 100;
        break;
    }
    switch (amount >= 50)
    {
    case 1:
        n50 = amount / 50;
        amount = amount % 50;
        break;
    }
    switch (amount >= 20)
    {
    case 1:
        n20 = amount / 20;
        amount = amount % 20;
        break;
    }
    switch (amount >= 10)
    {
    case 1:
        n10 = amount / 10;
        amount = amount % 10;
        break;
    }
    switch (amount >= 5)
    {
    case 1:
        n5 = amount / 5;
        amount = amount % 5;
        break;
    }

    cout << "notes of 2000"
         << " " << n2000 << endl;
    cout << "notes of 500"
         << " " << n500 << endl;
    cout << "notes of 200"
         << " " << n200 << endl;
    cout << "notes of 100"
         << " " << n100 << endl;
    cout << "notes of 50"
         << " " << n50 << endl;
    cout << "notes of 20"
         << " " << n20 << endl;
    cout << "notes of 10"
         << " " << n10 << endl;
    cout << "notes of 5"
         << " " << n5 << endl;
}
