#include <iostream>
using namespace std;

void merge(int *arr, int s, int e)
{
    int mid = (s + e) / 2;
    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *left = new int[len1]; // create a array dynamically
    int *right = new int[len2];

    // copy values
    int k = s;
    for (int i = 0; i < len1; i++)
    {
        left[i] = arr[k];
        k++;
    }

    k = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        right[i] = arr[k];
        k++;
    }

    // merge logic
    int leftindex = 0;
    int rightindex = 0;
    int mainarrayindex = s;
    while (leftindex < len1 && rightindex < len2)
    {
        if (left[leftindex] < right[rightindex])
        {
            arr[mainarrayindex] = left[leftindex];
            mainarrayindex++;
            leftindex++;
        }

        else
        {
            arr[mainarrayindex] = right[rightindex];
            mainarrayindex++;
            rightindex++;
        }
    }

    while (leftindex < len1)
    {
        arr[mainarrayindex] = left[leftindex];
        mainarrayindex++;
        leftindex++;
    }

    while (rightindex < len2)
    {
        arr[mainarrayindex++] = right[rightindex++];
    }

    // todo : delete left and right newly array
}
void mergesort(int *arr, int s, int e)
{
    if (s >= e)
    {
        return;
    }

    // left part sort by recursion

    int mid = (s + e) / 2;
    mergesort(arr, s, mid);

    // right part sort by recursion
    mergesort(arr, mid + 1, e);

    // now merge 2 sorted array

    merge(arr, s, e);
}
int main()
{
    int arr[] = {4, 5, 13, 2, 12};
    int n = 5;
    int s = 0;
    int e = n - 1;
    mergesort(arr, s, e);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}