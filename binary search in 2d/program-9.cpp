#include <iostream>
using namespace std;

int findsum(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}

bool ispossible(int arr[], int totalbook, int student, int mid)
{
    int studentcount = 1;
    int pagesum = 0;
    for (int i = 0; i < totalbook; i++)
    {
        if (pagesum + arr[i] <= mid)
        {
            pagesum = pagesum + arr[i];
        }
        else
        {
            studentcount++;
            if (studentcount > student || arr[i] > mid)
            {
                return false;
            } 
            pagesum = arr[i];
        }
    }

    return true;
}

int bookallocation(int arr[], int totalbook, int student)
{
    int start = 0;
    int end = findsum(arr, 4);
    int mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end)
    {
        if (ispossible(arr, totalbook, student, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}
int main()
{
    // int arr[] = {12, 34, 67, 90};
    int arr[]= {5,10,30,20,15};
    int totalbook = 5;
    int student = 3;

    cout << bookallocation(arr, totalbook, student);
}