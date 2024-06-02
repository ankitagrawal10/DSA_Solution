#include <iostream>
using namespace std;

int duplicate(int arr[], int n)
{
    int count = 0;
    int i =0;
    int j = 0;
    while(i<n){
        while(j<n){
            if(arr[i]==arr[j] && i!=j && j>i){
                count++;
                
            }
            i++;
            j++;
        }

        if(count!= 0){
            cout<<arr[i];
        }
        
    }
}
    
int main()
{
    int arr[8] = {1, 1,1, 2, 3, 3, 4, 2};
    int n = 8;
    duplicate(arr, n);
}