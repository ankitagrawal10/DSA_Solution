#include<iostream>
using namespace std;
int update(int arr[],int n){

    cout<<"inside the function"<<endl;

    arr[0] = 120; // updating the array
 
    for(int i = 0;i<3;i++){
        cout<<arr[i]<<" ";

    }
    cout<<endl;

    cout<<"going back to main function"<<endl;

}
int main(){
    int arr[3] = {1,2,3};
    update( arr,3);

    cout<<"printing the array"<<endl;
    for(int i = 0;i<3;i++){
        cout<<arr[i]<<" ";

    }
    cout<<endl;
}