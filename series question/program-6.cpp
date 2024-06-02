#include<iostream>
using namespace std;

bool isprime(int n){
    for(int i = 2;i<n;i++){
        if(n%i==0){
            return 0;
        }
        return 1;
    }
}
int main(){
    int n;
    cout<<"enter your number:"<<endl;
    cin>>n;
    if(isprime(n)){
        cout<<"it is a prime number:"<<endl;

    }
    else {
        cout<<"it is not a prime number"<<endl;
    }
}