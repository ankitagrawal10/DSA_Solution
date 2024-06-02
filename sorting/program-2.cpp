#include <iostream>
using namespace std;

int particition(int *arr, int s, int e)
{
    // step1:choose pivotelement
    int pivotindex = s;
    int pivotelement = arr[s];

    // step2: find the right position for pivot element and place if there

    int count = 0;
    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] <= pivotelement)
        {
            count++;
        }
    }

    int rightindex = s + count;
    swap(arr[pivotindex], arr[rightindex]);
    pivotindex = rightindex;

    // step3: left side is small & right side is large
    int i = s;
    int j = e;
    while (i < pivotindex && j > pivotindex)
    {
        while (arr[i] <= pivotelement)
        {
            i++;
        }
        while (arr[j] > pivotelement)
        {
            j--;
        }

        if (i < pivotindex && j > pivotindex)
        {
            swap(arr[i], arr[j]);
        }
    }
    return pivotindex;
}

void quicksort(int *arr, int s, int e)
{
    if (s >= e)
    {
        return;
    }

    int p = particition(arr, s, e); // particition
    quicksort(arr, s, p - 1);       // left
    quicksort(arr, p + 1, e);       // right
}
int main()
{
    int arr[] = {9, 2, 1, 7, 3, 4, 15, 8, 6, 20};
    int n = 10;

    int s = 0;
    int e = n - 1;
    quicksort(arr, s, e);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}