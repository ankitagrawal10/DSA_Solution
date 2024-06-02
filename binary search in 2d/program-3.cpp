#include <iostream>
using namespace std;

int solve(int dividend, int divisor)
{
    int s = 0;
    int e = abs(dividend);
    int ans = -1;

    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (abs(mid * divisor) == abs(dividend))
        {
            ans = mid;
            break;
        }
        else if (abs(mid * divisor) > abs(dividend))
        {
            e = mid - 1;
        }
        else
        {
            ans = mid;
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }

    if ((dividend < 0 && divisor < 0) || (dividend > 0 && divisor > 0))
    {
        return ans;
    }
    else
    {
        return -ans;
    }
}
int main()
{
    int dividend;
    cout << "Enter your dividend." << endl;
    cin >> dividend;

    int divisor;
    cout << "Enter your divisor" << endl;
    cin >> divisor;

    int ans = solve(dividend, divisor);
    cout << "Ans is " << ans << endl;

    int precision;
    cout << "enter your precision" << endl;
    cin >> precision;

    double stepsize = 0.1;
    double finalans = ans;

    for (int i = 0; i < precision; i++)
    {
        for (double j = finalans; j * divisor <= dividend; j = j + stepsize)
        {
            finalans = j;
        }
        stepsize = stepsize / 10.0;
    }
    cout << "final ans :" << finalans << endl; 
}
