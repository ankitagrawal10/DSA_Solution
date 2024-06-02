#include <iostream>
#include <vector>
using namespace std;

int binarysearch(vector<int> &arr, int s, int e, int key)
{
    if (s > e)
    {
        return -1;
    }

    int mid = (s + e) / 2;

    if (arr[mid] == key)
    {
        return mid;
    }

    // if (arr[mid] < key)
    // {
    //     return binarysearch(arr, mid + 1, e, key);
    // }

    // else
    // {
    //     return binarysearch(arr, s, mid - 1, key);
    // }

    // using ternary operator
    return (arr[mid] < key) ? binarysearch(arr, mid + 1, e, key) : binarysearch(arr, s, mid - 1, key);
}
int main()
{
    vector<int> v{10, 2, 30, 40, 50, 60, 99};
    int target = 99;

    int n = v.size();
    int s = 0;
    int e = n - 1;
    int ans = binarysearch(v, s, e, target);
    cout << "Answer is present at index: " << ans << endl;
}