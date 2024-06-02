#include <iostream>
using namespace std;

void printarray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
}



int main()
{
    int arr[9] = {2, 3};
    // int size = 10;a
    printarray(arr, 9);

    cout << " printing is done " << endl;

    int arrsize = sizeof(arr) / sizeof(int);
    cout << "size of array" << arrsize << endl;

    

    return 0;
}
