#include<iostream>
using namespace std;

bool unquie(int arr[],int n){
    int count;
    for(int i = 0;i<n;i++){
        count = 0;
        for(int j = 0 ;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
            if(arr[i]!=arr[j]){
                count++;
            }

            if(count==0){
                return true;
            }
            return false;
        }
    }
    


}
int main(){
    int arr[]={1,1,2,2,1,5};
    int n =6;
    unquie(arr,6);
}