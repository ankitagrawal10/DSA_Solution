#include <iostream>
#include<algorithm>
using namespace std;

bool ispossible(int arr[], int n, int k,int mid)
{
    int cowscount = 1;
    int last = arr[0];
    for(int i = 0; i<n;i++)
    {
        if(arr[i]-last>=mid)
        {
           cowscount++;
           if(cowscount>=k)
           {
            return true;
           }
           last = arr[i];
        }
    }
    return false;
}
int aggressivecow(int arr[], int n, int k)
{
    sort(arr,arr+n);
    int s = 0;
    int e = 5;
    int ans = -1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (ispossible(arr, n, k, mid))
        {
            ans = mid;
            s = mid+1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int main()
{
    int arr[] = {1,2,4,8,9};
    int n = 5;
    int k = 3;

    cout<<aggressivecow(arr,n,k);
}