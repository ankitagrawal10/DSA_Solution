#include<iostream>
#include<vector>
using namespace std;

int repeatingelement(vector<int>arr)
{
    for(int i = 0;i<arr.size();i++)
    {
       for(int j = i+1;j<arr.size();j++)
       {
        if(arr[i]==arr[j])
        {
            return i;
            break;
        }
       }
    }
    return -1;
}

int main()
{
    vector<int>arr{1,3,4,2,4};
    cout<<"repeating element of index are"<<endl;
    cout<<"index of repeating element are:"<<repeatingelement(arr);

}