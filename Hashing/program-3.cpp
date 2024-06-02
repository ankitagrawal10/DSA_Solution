#include <bits/stdc++.h>
using namespace std;
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    //map<int,int>mpp;
    unordered_map<int,int>mpp;
    for(int i = 0; i<n; i++)
    {
        cin>>arr[i];
        mpp[arr[i]]++;
        
    }

    cout<<"printing the iteration of the map"<<endl;
    for(auto it:mpp)
    {
        cout<<it.first<<"->"<<it.second<<endl;
    }
    int q;
    cin>>q;
    while(q--)
    {
        int n;
        cout<<"take the input of which number is occuring"<<endl;
        cin>>n;
        cout<<"print the count of which number is occuring"<<endl;
        cout<<mpp[n]<<endl;
    }
}