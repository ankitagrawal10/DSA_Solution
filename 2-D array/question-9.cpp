#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // addition of two array
    // int arr1[4] = {9, 5, 4, 9};
    // int arr2[4] = {2, 2, 1, 4};

    // int n = 4;
    // int m = 4;

    // int i = n - 1;
    // int j = m - 1;

    // int carry = 0;

    // vector<int> ans;

    // while (i >= 0 && j >= 0)
    // {
    //     int x = arr1[i] + arr2[j] + carry;
    //     int digit = x % 10;
    //     ans.push_back(digit);
    //     carry = x / 10;
    //     i--;
    //     j--;
    // }

    // while (i >= 0)
    // {

    //     int x = arr1[i] + 0 + carry;
    //     int digit = x % 10;
    //     ans.push_back(digit);
    //     carry = x / 10;
    //     i--;
    // }

    // while (j >= 0)
    // {
    //     int carry = 0;
    //     int x = arr1[i] + 0 + carry;
    //     int digit = x % 10;
    //     ans.push_back(digit);
    //     carry = x / 10;
    //     j--;
    // }

    // if (carry)
    // {
    //     ans.push_back(carry);
    // }

    // for (int i = ans.size() - 1; i >= 0; i--)
    // {
    //     cout << ans[i];
    // }

    // factorial of a large no

    vector<int> ans;
    int n;
    cout<<"factorial of a no.:"<<endl;
    cin >> n;
    ans.push_back(1);
    int carry = 0;

    for (int i = 2; i <= n; i++) // Changed the loop condition
    {
        for (int j = 0; j < ans.size(); j++)
        {
            int x = ans[j] * i + carry;
            ans[j] = x % 10;
            carry = x / 10;
        }

        while (carry)
        {
            ans.push_back(carry % 10);
            carry = carry / 10;
        }  
    }

    for (int i = ans.size() - 1; i >= 0; i--)
    {
        cout << ans[i];
    }

    return 0;
}
