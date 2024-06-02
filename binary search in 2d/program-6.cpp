#include <bits/stdc++.h>
using namespace std;

// int element(vector<int> arr, int k, int x)
// {
//     vector<pair<int, int>> difference; // Using a pair to store differences and their corresponding values

//     for (int i = 0; i < arr.size(); i++)
//     {
//         int diff = abs(arr[i] - x);
//         difference.push_back({diff, arr[i]});
//         sort(difference.begin(), difference.end());
//     }

//     // Sort the differences in ascending order based on the first element of the pairs

//     // Print the k closest elements
//     for (int i = 0; i < k; i++)
//     {
//         cout << difference[i].second << endl;
//     }
// }

// vector<int> twoptrmethod(vector<int> arr, int k, int x)
// {
//     int l = 0;
//     int h = arr.size() - 1;

    
//     while (h - l >= k)
//     {
//         if (x - arr[l] > arr[h] - x)
//         {
//             l++;
//         }
//         else
//         {
//             h--;
//         }
//     }

    
//     vector<int> ans;
//     for (int i = l; i <= h; i++)
//     {
//         ans.push_back(arr[i]);
//     }
//     return ans;
// }


int lowerbound(const vector<int>& arr, int element)
{
    int s = 0;
    int e = arr.size() - 1;
    int mid;
    int ans = -1;
    while (s <= e)
    {
        mid = s + (e - s) / 2;
        if (arr[mid] >= element)
        {
            ans = arr[mid];
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }

    return ans;
}

int bs(vector<int>arr,int k)
{
  int h = lowerbound(arr,element);
  int l = h-1;
  while(k--)
  {
    if(x-arr[l]>arr[h]-x)
    {
        h++;
    }
    else{
        l--;
    }
  }
  return int bs(arr.begin()+l+1,arr.begin()+h);
}

vector<int> twoptrmethod(vector<int> arr, int k, int x)
{
    int l = 0;
    int h = arr.size() - 1;

    
    while (h - l >= k)
    {
        if (x - arr[l] > arr[h] - x)
        {
            l++;
        }
        else
        {
            h--;
        }
    }
}


int main()
{
    vector<int> arr{12, 16, 22, 30, 35, 39, 42, 45, 48, 50, 53, 55, 56};
    int k = 4;
    int x = 35;

    vector<int> closestElements = twoptrmethod(arr, k, x);

    cout << "The " << k << " closest elements to " << x << " are: ";
    for (int num : closestElements)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
