#include<iostream>
using namespace std;

void print(int *p){
    cout<<*p<<endl;
}
void update(int *p){
    // p = p+1;
    *p = *p+1;

}

int getsum(int *arr,int n){
    cout<<sizeof(arr)<<endl;
    int sum = 0;
    for(int i = 0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}
int main(){
    int value = 5;
    int *p = &value;
    // print(p);
    cout<<"before"<<" "<<*p<<endl;
    update(p);
    cout<<"After"<<" "<<*p<<endl;

    int arr[6]={1,2,3,4,5,6};
    //cout<<getsum(arr,6)<<endl;
    cout<<getsum(arr+3,3)<<endl;


}

