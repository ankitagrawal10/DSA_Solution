#include <iostream>
#include <vector>
using namespace std;

void findmissing(int a[], int n)
{
//     for (int i = 0; i < n; i++)
//     {
//         int index = abs(a[i]);
//         if (a[index - 1] > 0)
//         {
//             a[index - 1] *= -1;
//         }
//     }

//     for (int i = 0; i < n; i++)
//     {
//         if (a[i] > 0)
//         {
//             cout << i + 1 << " ";
//         }
//     }

    int i = 0;
    while(i<n){
        int index = a[i]-1;
        // if(a[i]!=a[index])
        // {
        //     swap(a[i],a[index]);
        // }

        while(a[i]>0 && a[i]<=n && a[i]!=a[index])
        {
            swap(a[i],a[index]);
            index= a[i]-1;
        }

        // else{
        //     i++;
        // }
    }

    for(int i =0;i<n;i++)
    {
        if(a[i]!=i+1)
        {
            cout<<i+1<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    // vector<int>arr{1,2,3,4,5,9};
    // int n = 6;

    // int total = 0;
    // for(int i = 0; i<n-1;i++){
    //   total = total+arr[i];
    // }

    // int sum = (n*(n+1))/2;
    // cout<<sum-total;

    int a[] = {0,-10,1,3,-20};
    int n = sizeof(a) / sizeof(int);

    findmissing(a, n);
}
