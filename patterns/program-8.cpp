#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter your no."<<endl;
    cin>>n;
    //char ch = 'A';
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            char ch = 'A'+i-1;
            cout<<ch;
        }
        cout<<endl;
    }
    return 0;
}