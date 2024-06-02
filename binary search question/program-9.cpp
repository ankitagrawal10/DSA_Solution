// Book Allocation problem

bool ispossible(int arr[], int n, int m, int mid)
{
    int painters = 1;
    int time = 0;
    for (int i = 0; i < n; i++)
    {
        if (time + arr[i] <= mid)
        {
            time += arr[i];
        }
        else
        {
            painters++;
            if (painters > m || arr[i] > mid)
            {
                return false;
            }
            time = arr[i];
        }
    }
    return true;
}
int painter(int arr[], int n, int m)
{
    int s = 0;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    int e = sum;
    int ans = -1;
    int mid = (s + e) / 2;
    while (s <= e)
    {
        if (ispossible(arr, n, m, mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = (s + e) / 2;
    }
    return ans;
}
#include <iostream>
using namespace std;

int main()
{
    int arr[4] = {5,5,5,5};
    int n = 4;
    int m = 2;
    cout << painter(arr, n, m);
}