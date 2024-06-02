#include<iostream>
using namespace std;

void printarray(int arr[],int n){
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
}
int linearserach(int arr[],int n,int key){
    int count = 0;
    for(int i = 0;i<n;i++){
        if(arr[i]==key){
            count++;
            cout<<count;
            
        }
    }
}
int main(){
    int arr[9];
    int n = 9;
    cout<<"enter the element of array"<<endl;
    printarray(arr,n);
    int key;
    cout<<"enter your key"<<endl;
    cin>>key;
    
    linearserach(arr,n,key);


}