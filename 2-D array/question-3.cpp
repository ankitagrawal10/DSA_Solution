#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>arr{1,2,1,3,4,5,2};
    for(int i = 0; i<arr.size();i++)
    {
        for(int j = i+1 ; j<arr.size();j++)
        {
            if(arr[i]==arr[j])
            {
                cout<<arr[j]<<endl;
            }
        }
    }
}