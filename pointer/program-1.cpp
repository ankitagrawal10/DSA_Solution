#include<iostream>
using namespace std;

int main(){
    // int num = 5;
    // int *p = &num;
    // cout<<num<<endl;
    // cout<<"the address of num is :"<<&num<<endl;
    // cout<<"the address of ptr is :"<<*p<<endl;
    // cout<<"the address of ptr is :"<<p<<endl;

    // double d = 4.3;
    // double *p2 = &d;
    // cout<<"the address of p is :"<<*p2<<endl;
    // cout<<"the address of p is :"<<p2<<endl;

    // cout<<"size of integer is "<<sizeof(num)<<endl;
    // cout<<"size of pointer is "<<sizeof(p)<<endl;
    // cout<<"size of pointer is "<<sizeof(p2)<<endl;


    // pointer to int is created , and pointing to some garbage address
    // int *p;
    // int *p = 0;
    // cout<<*p<<endl;

    // int i = 5;
    // int *q = &i;

    // cout<<q<<endl;
    // cout<<*q<<endl;

    // int i = 5;
    // int *p = 0;
    // p = &i;
    // cout<<p<<endl;
    // cout<<*p<<endl;

    // int num = 5;
    // int a = num;
    // a++;
    // cout<<num<<endl;
    // cout<<a<<endl;

    // int *p = &num;
    // int b = *p;
    // b++;
    // (*p)++;
    // cout<<*p*2<<endl;

    // int *p = &num;
    // cout<<"before"<<num<<endl;
    // (*p)++;
    // cout<<"after"<<num<<endl;

    // int *q = p;
    // cout<<p<<"-"<<q<<endl;
    // cout<<*p<<"-"<<*q<<endl;

    int i = 3;
    int *t = &i;
    *t = *t+1;
    cout<<*t<<endl;
    cout<<"before t"<<t<<endl;
    t = t+1;
    cout<<"after t"<<t<<endl;

}