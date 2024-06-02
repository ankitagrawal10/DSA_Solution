#include <iostream>
using namespace std;

// selection sort

void printarray(int arr[], int n)
{
    for (int i = 0; i <= n - 1; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;
}
void sorting(int arr[], int n)
{

    for (int i = 0; i < n - 1; i++)
    {
        int minindex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minindex])
            {
                minindex = j;
            }
            
        }
        swap(arr[minindex], arr[i]);
    }
}
int main()
{
    int arr[6] = {1,7,9,2,3,0};
    int n = 6;
    sorting(arr, 6);

    cout << "sorted element are :" << endl;

    printarray(arr, 6);
}