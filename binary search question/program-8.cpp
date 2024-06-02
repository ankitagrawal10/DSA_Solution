#include <iostream>
using namespace std;
// square root question in binary search 
long long int squareroot(int num)
{
    int s = 0;
    int e = num;
    long long int ans = -1;
    long long int mid = (s + e) / 2;
    while (s <= e)
    {
        if (mid * mid == num)
        {
            return mid;
        }

        if (mid * mid < num)
        {
            ans = mid;
            s = mid + 1;
        }

        else
        {
            e = mid - 1;
        }
        mid = (s + e) / 2;
    }
    return ans;
}

double moreprecision(int n, int precision, int tempsol)
{
    double factor = 1;
    double ans = tempsol;
    for (int i = 0; i < precision; i++)
    {
        factor = factor / 10;
        for (double j = ans; j * j < n; j = j + factor)
        {
            ans = j;
        }
    }
    return ans;
}
int main()
{
    long long int num;
    cout << "enter your number:" << endl;
    cin >> num;
    int tempsol = squareroot(num);
    cout << "answer is :" << moreprecision(num, 3, tempsol) << endl;
}