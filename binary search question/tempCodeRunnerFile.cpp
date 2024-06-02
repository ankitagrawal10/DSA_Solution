#include <bits/stdc++.h>
//#include<
using namespace std;

bool ispossible(int stall[], int k, int mid, int n)
{
    int cowcount = 1;
    int lastpossition = stall[0];
    for (int i = 0; i < n; i++)
    {
        if (stall[i] - lastpossition >= mid)
        {
            cowcount++;
            if (cowcount == k)
            {
                return true;
            }
            lastpossition = stall[i];
        }
    }
    return false;
}
int cows(int stall[], int k, int n)
{

    sort(stall, stall + n);
    int s = 0;
    int maxi = -1;
    for (int i = 0; i < n; i++)
    {
        maxi = max(maxi, stall[i]);
    }
    int e = maxi;
    int ans = -1;
    int mid = (s + e) / 2;
    while (s >= e)
    {
        if (ispossible(stall, k, mid, n))
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
}
int main()
{
    int stall[5] = {4, 2, 1, 3, 6};
    int k = 2;
    int n = 5;
    cout<<cows(stall,k,n);
}