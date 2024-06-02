#include <iostream>
using namespace std;
void printarray(int arr[], int n)
{
    //cout << "enter your elements of array:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout<< arr[i];
    }
}

int sort(int arr[], int n)
{
    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        while (arr[i]==0 && i<j)
        {
            i++;
        }

         while (arr[j]==1 && i<j)
        {
            j--;
        }
        if(i<j){

        swap(arr[i],arr[j]);
        i++;
        j--;

        }

        
    }
}
int main()
{
    int arr[5]={0,1,1,0,0};
    int n=5;
    //cout << "enter the number" << endl;

    //cin >> n;
    //printarray(arr,n);
    sort(arr, n);
    printarray(arr,n);
}