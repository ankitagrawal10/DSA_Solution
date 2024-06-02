#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter your no."<<endl;
    cin>>n;
    //int count = 1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i<<" ";
            //count = count+1;

        }
        cout<<endl;
    }
}