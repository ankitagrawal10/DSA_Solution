#include <iostream>
#include <vector>
using namespace std;

bool checksorted(vector<int> &arr, int &n, int i)
{
    if (i == n - 1)
    {
        return true;
    }
    if (arr[i + 1] < arr[i])
    {
        return false;
    }

    return checksorted(arr, n, i + 1);
}

int main()
{
    vector<int> v{2,6,7,9,12,11};
    int n = v.size();
    int i = 0;
    bool issorted = checksorted(v, n, i);

    if (issorted)
    {
        cout << "Array is sorted" << endl;
    }
    else
    {
        cout << "Array is not sorted" << endl;
    }
}