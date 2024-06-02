#include <bits/stdc++.h>
using namespace std;

// set<pair<int, int>> kpair(int arr[], int n, int k)
// {
//     set<pair<int, int>> ans;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j < n; j++) // Changed n-1 to n
//         {
//             if (abs(arr[i] - arr[j]) == k) // Used abs to consider absolute difference
//             {
//                 cout << arr[i] << " " << arr[j] << endl;
//                 ans.insert({arr[i], arr[j]});
//             }
//         }
//     }
//     return ans;
// }

// int kpair(vector<int> arr, int k)
// {
   
//     sort(arr.begin(), arr.end());
//     set<pair<int,int>>ans;
//     int i = 0;
//     int j = 1;
//     while (j < arr.size())
//     {
//         int diff = arr[j] - arr[i];
//         if (diff == k)
//         {
//             //cout << arr[i] << " " << arr[j] << endl;
//             ans.insert({arr[i],arr[j]});
//             i++;
//             j++;
//         }
//         else if (diff < k)
//         {
//             j++;
//         }
//         else
//         {
//             i++;
//         }
//         if (i == j)
//         {
//             j++;
//         }
//     }
//     return ans.size();
// }

int binary(vector<int>arr,int start, int x)
{
    int end = arr.size()-1;
    int mid = start+(end-start)/2;
    while(start<=end)
    {
        if(arr[mid]==x)
        {
            return mid;
        }
        else if(arr[mid]>x)
        {
            end = mid-1;
        }

        else
        {
            start = mid+1;
        }
        mid = start+(end-start)/2;
    }
    return -1;
}

int kpair(vector<int>arr, int k)
{
    sort(arr.begin(), arr.end());
    set<pair<int,int>>ans;

    for(int i= 0; i<arr.size();i++)
    {
         if(binary(arr,i+1,arr[i]+k)!=-1)
         {
            ans.insert({arr[i],arr[i]+k});
         }
    }
    return ans.size();
}
int main()
{
    vector<int> arr{1,1,3,4};
    int n = 5;
    int k;
    cout << "Enter your number: ";
    cin >> k;
    // set<pair<int, int>> result = kpair(arr, n, k); // Store the result in a set
    int result = kpair(arr,2);
    cout << "Count of pairs with difference " << k << ": " << result<< endl; // Use size() to get the count
    return 0;
}
