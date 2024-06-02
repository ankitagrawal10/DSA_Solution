#include<iostream>
using namespace std;

// topic -> local & global variable

int x = 30;  // global variable

void fun(){
    int x = 60;
    cout<< x <<endl;
    ::x = 40;
    cout<<::x<<endl;
}
int main(){
    x = 4;
    int x = 20; // local variable to main() function
    cout<<x<<endl;
    cout<<::x<<endl;

    {
        int x = 50;
        cout<<x<<endl;
        cout<<::x<<endl;
    }
    fun();
}