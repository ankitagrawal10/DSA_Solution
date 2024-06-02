#include<iostream>
#include<cmath>
using namespace std;

// int decimaltobinary(int n)
// {
//     int i = 0;
//     int binaryno = 0;
//     while (n > 0)
//     {
//         int bit = n % 2;
//         binaryno = bit * pow(10, i++) + binaryno;
//         n = n / 2;
//     }
//     return binaryno;
// }

// int binarytodecimal(int n)
// {
//     int i = 0;
//     int decimal = 0;
//     while (n)
//     {
//         int bit = (n & 1);
//         decimal = bit * pow(2, i++) + decimal;
//         n = n >> 1;
//     }
//     return decimal;
// }
// int areaofcircle(int r)
// {
//     float area = float(3.14 * pow(r, 2));
//     return area;
// }
// int factorial(int n)
// {
//     int fact = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         fact = fact * i;
//     }
//     return fact;
// }

// int reverseinteger(int n)
// {
//     int reverse = 0;
//     while (n != 0)
//     {
//         int remainder = n % 10;
//         reverse = reverse * 10 + remainder;
//         n=n/10;
//     }

//     return reverse;
// }
// int convertcelsiustofahernit(int c){
//     int f = (c*1.8)+32;
//     return f;

// }

// int kbit(int n,int k){
//     int value = 1<<k;
//     int ans = n | value;
//     return ans;

// }

int prime(int n)
{
    bool flag = 1;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << "not a prime";
            flag = 0;
            break;
        }
    }
    if (flag == 1)
    {
        cout << "prime";
    }
}
int main()
{
    int n;
    cin >> n;
    // int k;
    // cin>>k;
    // cout << factorial(n);
    // cout<<reverseinteger(n);
    // cout<<kbit(n,k);
    // cout<<convertcelsiustofahernit(n);
    // int binary = decimaltobinary(n);
    // cout<<binary;
    // cout << binarytodecimal(n);
    // cout<<areaofcircle(n);
    // bool isprime = prime(n);
    // if(isprime){
    //     cout<<"number is prime";
    // }
    // else{
    //     cout<<"number is not a prime";
    // }
    // for(int i = 2; i<=n;i++){
    //     bool isprime = prime(i);
    //     if(isprime){
    //         cout<<i<<endl;
    //     }
    // }

    bool flag = 0;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << "not a prime ";
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        cout << "prime";
    }
    cout<<endl;
    int k;
    cin >> k;
    for (int i = 2; i <= k; i++)
    {
        if (prime(i))
        {
            cout << i << endl;
        }
    }
}