#include<iostream>
using namespace std;

int main(){
    int num = 3;  // continue statement use only loop
    switch(num){
        case 1: cout<<"one"<<endl;
        case 2: cout<<"two"<<endl;
        case 3: cout<<"three"<<endl;
                continue;
        case 4: cout<<"four"<<endl;
        default: cout<<" it is default"<<endl;
    }
}