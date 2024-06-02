#include <iostream>
using namespace std;

bool ispossible(int arr[], int n, int m, int mid)
{
    int sawblade = 0;
    for (int wood = 0; wood < n; wood++)
    {
        if (arr[wood] > mid)
        {
            sawblade = sawblade + arr[wood] - mid;
        }

        if (sawblade >= m)
        {
            return true;
        }
    }
    return false;
}
int spoj(int arr[], int n, int m)
{
    int s = 0;
    int e = 20;
    int ans = -1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (ispossible(arr, n, m, mid))
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return ans;
}

int main()
{
    int arr[] = {20, 15, 10, 17};
    long long int n = 4;
    long long int m = 7;
    cout << spoj(arr, n, m) << endl;

    return 0;
}
