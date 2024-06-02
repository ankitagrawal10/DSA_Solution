#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> arr{1, 0, 2, 0, 1, 2, 2, 0, 0, 1, 0, 1};
    int start = 0;
    int mid = 0;
    int end = arr.size() - 1;
    while (mid <= end)
    {
        if (arr[mid] == 0)
        {
            swap(arr[start], arr[mid]);
            start++;
            mid++;
        }
        else if (arr[mid] == 1)
        {

            mid++;
        }
        else
        {
            swap(arr[mid], arr[end]);
            end--;
        }
    }

    for (auto value : arr)
    {
        cout << value << endl;
    }
}