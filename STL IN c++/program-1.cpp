#include<iostream>
#include<array>
using namespace std;

int main(){
    int arr[3]={1,2,3};
    array<int,4>a={1,2,3,4};
    int size = a.size();

    for(int i = 0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    cout<<"Element at 2nd index :"<<a.at(2)<<endl;
    cout<<"array is empty or not :"<<a.empty()<<endl;
    cout<<"First element "<<a.front()<<endl;
    cout<<"Last element "<<a.back()<<endl;
}