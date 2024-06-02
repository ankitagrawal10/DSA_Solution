// #include <iostream>
// #include <vector>
// using namespace std;

// int lowerbound(vector<int> arr, int element)
// {
//     int s = 0;
//     int e = arr.size() - 1;
//     int mid = s + (e - s) / 2;
//     int ans = -1;
//     while (s < e)
//     {
//         if (arr[mid] >= element)
//         {
//             ans = arr[mid];
//             e = mid;
//         }
//         else if (element > arr[mid])
//         {
//             s = mid + 1;
//         }
//         else
//         {
//             e = mid;
//         }
//         mid = s + (e - s) / 2;
//     }

//     if (e < arr.size())
//     {
//         return arr[e];
//     }
//     return ans;
// }

// int upperbound(vector<int> arr, int element)
// {
//     int s = 0;
//     int e = arr.size() - 1;
//     int mid = s + (e - s) / 2;
//     int ans = -1;
//     while (s <= e)
//     {
//         if (arr[mid] <= element)
//         {
//            ans = arr[mid];
//             s = mid + 1;
//         }

//         else
//         {
            
//             e = mid-1;
//         }

//         mid = s + (e - s) / 2;
//     }
//     return ans;
// }
// int main()
// {
//     vector<int> arr{10, 20, 30, 40, 50};

//     int element;
//     cout << "enter your element" << endl;
//     cin >> element;

//     cout << lowerbound(arr, element) << endl;
//     cout << upperbound(arr, element)<<endl;
// }


#include <iostream>
#include <vector>
using namespace std;

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

int upperbound(const vector<int>& arr, int element)
{
    int s = 0;
    int e = arr.size() - 1;
    int mid;
    int ans = -1;
    while (s <= e)
    {
        mid = s + (e - s) / 2;
        if (arr[mid] <= element)
        {
            ans = arr[mid];
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return ans;
}

int main()
{
    vector<int> arr{10, 20, 30, 40, 50};

    int element;
    cout << "Enter your element: " << endl;
    cin >> element;

    cout << "Lower bound: " << lowerbound(arr, element) << endl;
    cout << "Upper bound: " << upperbound(arr, element) << endl;
}
