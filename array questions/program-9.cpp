#include<iostream>
using namespace std;
// bansaliya code 
void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

void reverseAlternate(int arr[],int size){

    for(int i=0;i<size;i++){
        if(i+1<size){
            swap(arr[i+1],arr[i]);
        
            i++;
        }
       // cout<<arr[i]<<" ";
    }
}
int main(){
    
    int arr[6]={1,2,3,4,5};
    cout<<"print array before Alternate reverse"<<endl;
    printArray(arr,5);

    reverseAlternate(arr,5);
    cout<<"print array after Alternate reverse"<<endl;
    printArray(arr,5);



    return 0;
}
