#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

void sumofsubsequence(vector<int> &arr, int i, int sum, int &maxi)
{
    if (i >= arr.size())
    {
        maxi = max(sum, maxi);
        return;
    }

    // exclude
    sumofsubsequence(arr, i + 1, sum, maxi);

    // include
    sumofsubsequence(arr, i + 2, sum + arr[i], maxi);
}

int main()
{
    vector<int> arr{2, 1, 4};
    int sum = 0;
    int maxi = INT_MIN;
    int i = 0;
    sumofsubsequence(arr, i, sum, maxi);
    cout << "sum of this subsequences " << maxi << endl;
}
