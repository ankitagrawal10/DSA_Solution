#include<iostream>
using namespace std;


int pairsum(int arr[],int n,int sum){
    
    //int count = 0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
           
            if(arr[i]+arr[j]==sum){
                cout<<"("<<arr[i]<<", "<<arr[j]<<")"<<endl;;
            }
            
        }
    }
}
int main(){
    int arr[6] = {1,2,3,4,5,7};
    int n=6;
    int sum = 9;
    pairsum(arr,n,sum);

}