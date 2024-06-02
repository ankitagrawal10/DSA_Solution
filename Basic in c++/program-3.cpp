#include <iostream>
#include <vector>
using namespace std;

int findunique(vector<int> arr)
{
    int ans = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}

int main()
{

    // vector<int>arr;
    // int ans = (sizeof(arr)/sizeof(int));
    // cout<<ans;
    // cout<<endl;
    // cout<<arr.size()<<endl;
    // cout<<arr.capacity()<<endl;

    // arr.push_back(5);
    // arr.push_back(9);

    // for(int i = 0;i<arr.size();i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;

    // vector<int>brr(10);
    // cout<<brr.size();

    // vector<int> crr{10,20,30,40};
    // for(int i = 0;i<crr.size();i++){
    //     cout<<crr[i];
    // }

    // unique element of array
    // int n;
    // cout << "enter the size of array" << endl;
    // cin >> n;

    // vector<int> arr(n);
    // cout << "enter your element" << endl;
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }

    // cout << "unique element of array is :" << findunique(arr);

    // union of array
    // int arr[] = {1,3,5,7,9};
    // int sizea= 5;
    // int brr[] = {2,4,6,8,3};
    // int sizeb=5;

    // vector<int>ans;
    // for(int i=0;i<sizea;i++){
    //     ans.push_back(arr[i]);
    // }
    // for(int i=0;i<sizeb;i++){
    //     ans.push_back(brr[i]);
    // }
    // for(int i = 0;i<ans.size();i++){
    //     cout<<ans[i]<<" ";
    // }

    // intersection of array
    // vector<int> arr{1, 2, 3, 4, 6, 8};
    // vector<int> brr{3, 4, 10};

    // vector<int> ans;
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     int element = arr[i];
    //     for (int j = 0; j < brr.size(); j++)
    //     {
    //         if (element == brr[j])
    //         {
    //             // mark the element
    //             brr[j] = -1;
    //             ans.push_back(element);
    //         }
    //     }
    // }

    // for (int i = 0; i < ans.size(); i++)
    // {
    //     cout << ans[i] << " ";
    // }

    // pair sum of one array
    // vector<int>arr{1,3,5,7,2,4,6};

    // for(int i = 0;i<arr.size();i++){
    //     for(int j = i+1;j<arr.size();j++){
    //         if(arr[i]+arr[j]==8){
    //             cout<<arr[i]<<" "<<arr[j];
    //         }
    //     }
    //     cout<<endl;
    // }

    // pair sum of 2 array
    // vector<int> arr{1, 2, 4, 3};
    // vector<int> brr{3, 2, 1, 5};
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     for (int j = i + 1; j < brr.size(); j++)
    //     {
    //         if (arr[i] + brr[j] == 3)
    //         {
    //             cout << arr[i] << "" << brr[j];
    //         }
    //     }
    //     cout << endl;
    // }

    // triplet of a sum
    // vector<int> arr{10, 20, 30, 40};
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     for (int j = i + 1; j < arr.size(); j++)
    //     {
    //         for (int z = j + 1; z < arr.size(); z++)
    //         {
    //             // cout << "pair of "
    //             //      << "(" << arr[i] << "," << arr[j] << "," << arr[z] << ")" << endl;

    //             if (arr[i] + arr[j] + arr[z] == 80)
    //             {
    //                 cout << "pair of sum 80 "
    //                      << "(" << arr[i] << "," << arr[j] << "," << arr[z] << ")" << endl;
    //             }
    //         }
    //     }
    // }

    // sorts 0 and 1

    vector<int> arr{1, 0, 0, 1, 0, 0, 1, 0, 1};
    int start = 0;
    int end = arr.size() - 1;
    for (int i = 0; i < arr.size(); i++)
    {
        while (start < end)
        {
            if (arr[i] == 0)
            {
                swap(arr[i], arr[start]);
                start++;
            }
            else if (arr[i] == 1)
            {
                swap(arr[i], arr[end]);
                end--;
            }
        }
    }
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     cout << arr[i] << " ";
    // }

    for(auto value:arr){
        cout<<value<<" ";
    }
}
