#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr{1, 2, -1, 3, -9, 21, -91, 11, -77, 55};
    int start = 0;
    int end = arr.size() - 1;
    for (int i = 0; i < arr.size(); i++)
    {
        while ((start <= end) || (start < end))
        {
            if (arr[i] < 0)
            {
                swap(arr[i], arr[start]);
                start++;
            }
            else
            {
                swap(arr[i], arr[end]);
                end--;
            }
        }
    }

    for (auto value : arr)
    {
        cout << value << endl;
    }
}
