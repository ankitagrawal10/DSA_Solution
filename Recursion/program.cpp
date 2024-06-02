#include<iostream>
using namespace std;

void print(int n){
    // base case
    if(n==0){
        return;
    }
    // processing 
    cout<<n<<endl;
    // Recursive relation 
    print(n-1);
}
int main(){
    int n;
    cout<<"enter your number"<<endl;
    cin>>n;
    print(n);
}