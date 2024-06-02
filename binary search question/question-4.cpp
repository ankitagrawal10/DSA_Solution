#include <iostream>
using namespace std;

int findsqrt(int n)
{
    int target = n;
    int s = 0;
    int e = n - 1;
    int ans = -1;

    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (mid * mid == target)
        {
            return mid;
        }

        else if (mid * mid > target)
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
    return ans;
}
int main()
{
    // int n;
    // cout << "enter your number" << endl;
    // cin >> n;

    // int ans = findsqrt(n);
    // cout << "Ans is" << ans << endl;

    // int precision;
    // cout<<"Enter the number of floating digits in precison"<<endl;
    // cin>>precision;

    // double finalans = ans;
    // double step = 0.1;
    // for(int i = 0; i<precision;i++){
    //     for(double j = finalans; j*j<=n; j= j+step)
    //     {
    //         finalans = j;
    //     }
    //     step = step/10;
    // }
    // cout<<"final ans is "<<finalans<<endl;
    // return 0;

    int sum = 0;
    for(int i =0; i<10;i++)
    {
        sum+=i;
    }

    cout<<sum;
}