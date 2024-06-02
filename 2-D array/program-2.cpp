#include <iostream>
using namespace std;

void printsum(int arr[][2], int n, int m)
{
    for (int i = 0; i < 2; i++)
    {
        int sum = 0;
        for (int j = 0; j < 2; j++)
        {
            sum += arr[i][j];
        }
        cout << sum << " ";
    }
    cout << endl;
}

int largestsum(int arr[][2], int n, int m)
{
    int maxi = INT8_MIN;
    int rowindex = -1;
    for (int i = 0; i < 2; i++)
    {
        int sum = 0;
        for (int j = 0; j < 2; j++)
        {
            sum += arr[i][j];
        }
        if (sum > maxi)
        {
            maxi = sum;
            rowindex = i;
        }

        cout << "the maximum sum is " << maxi << endl;
        return rowindex;
    }
}

    int main()
    {
        int arr[2][2];

        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                cout << "enter your element" << endl;
                cin >> arr[i][j];
            }
        }

        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
        cout << "print the sum of 2-D array" << endl;

        printsum(arr, 2, 2);

        int ans = largestsum(arr,2,2);
        cout<<ans<<endl;
        return 0;
    }