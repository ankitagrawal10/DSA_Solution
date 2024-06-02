#include<iostream>
using namespace std;

int main(){
    // int arr[10]={2,3,5};
    // cout<<"address of first memory block"<<arr<<endl;
    // cout<<arr[0]<<endl;
    // cout<<"address of first memory block"<<&arr[0]<<endl;
    // cout<<*arr<<endl;
    // cout<<*arr+1<<endl;
    // cout<<*(arr)+1<<endl;
    // cout<<arr+1<<endl;
    // cout<<*(arr+1)<<endl;

    // cout<<arr[2]<<endl; // without using pointer 
    // cout<<*(arr+2)<<endl; // using pointer

    // int i = 2;
    // cout<<i[arr]<<endl;

    // int temp[10]={1,2,3,4};
    // cout<<sizeof(temp)<<endl;
    // cout<<sizeof(*temp)<<endl;


    // int *ptr = &temp[0];
    // cout<<sizeof(ptr)<<endl;
    // cout<<sizeof(*ptr)<<endl;
    // cout<<sizeof(&ptr)<<endl;


    // int a[20]={1,2,3,4};
    // cout<<&a[0]<<endl;
    // cout<<&a<<endl;
    // cout<<a<<endl;

    // int *p = &a[0];
    // cout<<p<<endl;
    // cout<<*p<<endl;
    // cout<<&p<<endl;

    int arr[10]={0};
    //error
    // arr=arr+1;
    int *ptr = &arr[0];
    cout<<ptr<<endl;
    ptr= ptr+1;
    cout<<ptr;


  
    return 0;
}