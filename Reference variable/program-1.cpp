#include<iostream>
using namespace std;

// int& fun(int a){
//     int num = a;
//     int &ans=num;
//     return ans;
// }  baad practice ha yah

void update2(int &n){
    n++;
}
void update1(int n){
    n++;
}
int main(){
    // int i = 5;
    // // create a reference variable
    // int &j=i;
    // cout<<i<<endl;
    // j++;
    // cout<<i;

    int n = 5;
    cout<<" before "<<n<<endl;
    update2(n);
    cout<<" after "<<n<<endl;

    // fun(n);
}