#include <iostream>
#include <vector>
using namespace std;

void commonelementofsortarray(int arr1[], int arr2[], int arr3[], int n1, int n2, int n3)
{
    int i, j, k = 0;
    while (i < n1 & j < n2 & k < n3)
    {
        if ((arr1[i] == arr2[j]) && (arr2[j]==arr3[k]))
        {
            cout << arr1[i];
            i++;
            j++;
            k++;
        }
        else if (arr1[i] < arr2[j])
        {
            i++;
        }
        else if (arr2[j] < arr3[k])
        {
            j++;
        }
        else
        {
            k++;
        }
    }

}

int main()
{
    int arr1[] = {1, 5, 10, 20, 40, 80};
    int n1 = 6;

    int arr2[] = {6, 7, 20, 80, 100};
    int n2 = 5;

    int arr3[] = {3, 15, 20, 30, 70, 80, 120};
    int n3 = 7;

    commonelementofsortarray(arr1, arr2, arr3, 6, 5, 7);
    
}