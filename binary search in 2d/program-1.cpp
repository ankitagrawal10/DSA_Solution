#include<iostream>
using namespace std;

bool binarysearch2d(int arr[][4],int n, int m, int target)
{
   int s = 0;
   int totalsize = n*m;
   int e = totalsize-1;

   int mid = s+(e-s)/2;
   while(s<=e)
   {
     int rowindex = mid/m;
     int colindex = mid%m;

     int element = arr[rowindex][colindex];
     if(element==target)
     {
        cout<<rowindex<<" "<<colindex<<endl;
        return true;
     }

     else if(target>element)
     {
        s = mid+1;
     }
     
     else
     {
          e = mid-1;
     }

    mid = s+(e-s)/2;

   }

   return false;
}
int main()
{
    int arr[3][4]={{1,2,3,4},
    {5,6,7,8},
    {9,10,11,12},
    };

    int n = 3;
    int m = 4;

    int target=10;

    bool result = binarysearch2d(arr,n,m,target);
    if(result)
    {
        cout<<"found"<<endl;

    }
    else{
        cout<<"target not found"<<endl;
    }
}