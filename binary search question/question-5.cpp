#include <iostream>
using namespace std;

// int findPivot(int arr[], int n)
// {
//    int s = 0;
//    int e = n - 1;
//    int mid = s + (e - s) / 2;

//    while (s < e)
//    {
//       if (s == e)
//       {
//          return s;
//       }
//       if (mid + 1 <= e && arr[mid] > arr[mid + 1])
//       {
//          return arr[mid];
//       }

//       if (mid + 1 >= s && arr[mid - 1] > arr[mid])
//       {
//          return mid - 1;
//       }
//       if (arr[mid] >= arr[0])
//       {
//          s = mid + 1;
//       }
//       else
//       {
//          e = mid;
//       }
//       mid = s + (e - s) / 2;
//    }
//    return arr[s];
// }

int findPivotsmallest(int arr[], int n)
{
   int s = 0;
   int e = n - 1;
   int mid = s + (e - s) / 2;

   while (s < e)
   {
      if (s == e)
      {
         return arr[s];
      }
      if (arr[mid] >= arr[0])
      {
         s = mid + 1;
      }
      else
      {
         e = mid;
      }
      mid = s + (e - s) / 2;
   }
   return arr[s];
}

int findPivotlargest(int arr[], int n)
{
   int s = 0;
   int e = n - 1;
   int mid = s + (e - s) / 2;

   while (s < e)
   {
      if (s == e)
      {
         return arr[s];
      }
      if (arr[mid] < arr[0])
      {
         e = mid - 1;
      }
      else
      {
         if (arr[mid] > arr[mid + 1])
         {
            e = mid;
         }
         else
         {
            s = mid + 1;
         }
      }
      mid = s + (e - s) / 2;
   }
   return arr[s];
}

int main()
{
   int arr[] = {7,1, 2, 3};
   int n;
   cin >> n;

   cout <<"pivot element of array is smallest:"<< findPivotsmallest(arr, n)<<endl;
   cout<<"pivot element of array is largest:"<<findPivotlargest(arr,n)<<endl;
}