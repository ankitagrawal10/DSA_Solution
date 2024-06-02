#include <iostream>
using namespace std;

// void solve(int arr[])
// {
//     cout << "array in function" << sizeof(arr) << endl;
//     cout << arr << endl;
//     cout << &arr << endl;
//     arr[0] = 50;
// }

// void update(int *a , int *b)
// {
//     *a = 100;
//     *b = 200;
// }

// void util(int*p)
// {
//     // p = p+1;
//     *p = *p+1;
// }

// void solve(int** ptr)
// {
//     *ptr = *ptr +1;
// }

// void solve(int &value)
// {
//     value++;    
// }

void solve(int*& p)
{
    p = p+1;
}
int main()
{
    // int a = 5;
    // int b = 5;
    // cout<<&a<<endl;
    // cout<<&b<<endl;

    // pointer creation
    // int a = 5;
    // int *ptr = &a;
    // cout<<*ptr<<endl;

    // int a = 5;
    // int *ptr = &a;
    // char ch = 'b';
    // char *c = &ch;
    // double d = 1.222;
    // double *dtr = &d;
    // cout<<&a<<endl;
    // cout<<ptr<<" "<<*ptr<<endl;
    // cout<<&ptr<<endl;
    // cout<<sizeof(ptr)<<endl;
    // cout<<sizeof(c)<<endl;
    // cout<<sizeof(dtr)<<endl;

    // int *ptr;
    // cout<<*ptr<<endl;  // segmentation fault

    // int *ptr = 0;
    // cout<<sizeof(ptr)<<endl;
    // cout<<&ptr<<endl;

    // int a = 10;
    // int *ptr = &a;
    // cout<<a<<endl;
    // cout<<&a<<endl;
    // cout<<ptr<<endl;
    // cout<<*ptr<<endl;
    // cout<<&ptr<<endl;
    // cout<<*ptr*2<<endl;
    // cout<<(*ptr)++;
    // cout<<++(*ptr)<<endl;

    // int a = 5;
    // int *ptr = &a;
    // int *dusraptr = ptr;
    // cout << *ptr << endl;
    // cout << *dusraptr << endl;

    // int arr[4] = {12,14,16,18};
    // cout<<arr<<endl;
    // cout<<arr[0]<<endl;
    // cout<<"using dereference operator"<<" "<<*(arr)<<endl;
    // cout<<&arr<<endl;
    // cout<<&arr[0]<<endl;
    // int *p = arr;
    // cout<<p<<endl;
    // cout<<&p<<endl;
    // cout<<2[arr]<<endl;
    // cout<<arr+2<<endl;
    // p = p+2;
    // cout<<p;

    // char ch[10] = "ankit";
    // char *c = ch;
    // cout<<ch<<endl;
    // cout<<&ch<<endl;
    // cout<<*c<<endl;
    // cout<<ch[0]<<endl;
    // cout<<&c<<endl;
    // cout<<c<<endl;

    // char name[10] = "sherbano";
    // char *cptr = &name[0];
    // cout << name << endl;
    // cout << &name << endl;
    // cout << *(name + 3) << endl;
    // cout << cptr << endl;

    // char ch = 'k';
    // char *cptr = &ch;
    // cout<<cptr<<endl;

    // char *c = "ankit";
    // cout<<c<<endl;

    // int arr[10] = {1, 2, 3, 4};
    // cout << "array in main function" << sizeof(arr) << endl;

    // cout << arr << endl;
    // cout << &arr << endl;
    // for (int i = 0; i < 10; i++)
    // {
    //     cout << arr[i] << endl;
    // }
    // solve(arr);
    // for (int i = 0; i < 10; i++)
    // {
    //     cout << arr[i] << endl;
    // }

    // int brr[10] = {10,20,30,40};
    // int *p = &brr[1];
    // int *q = &brr[2];
    // update(p,q);
    // for(int i = 0;i<10;i++)
    // {
    //    cout<<brr[i]<<endl;
    // }

    // int a =5;
    // int*p = &a;
    // int** q = &p;

    // cout<<&a<<endl;
    // cout<<a<<endl;
    // cout<<p<<endl;
    // cout<<&p<<endl;
    // cout<<*p<<endl;
    // cout<<q<<endl;
    // cout<<&q<<endl;
    // cout<<*q<<endl;
    // cout<<**q<<endl;

    // int a = 5;
    // int *p = &a;
    // cout<<"before"<<endl;
    // cout<<a<<endl;
    // cout<<p<<endl;
    // cout<<*p<<endl;
    // util(p);
    // cout<<"after"<<endl;
    // cout<<a<<endl;
    // cout<<p<<endl;
    // cout<<*p<<endl;

    // int x = 12;
    // int* p = &x;
    // int** q = &p;
    // cout<<q<<endl;
    // cout<<p<<endl;
    // solve(q);
    // cout<<"after"<<endl;
    // cout<<p<<endl;
    // cout<<x<<endl;
    // cout<<q<<endl;

    // int a = 5;
    // int *p = &a;
    // int **ptr = &p;

//    int a = 5;
//    //creating a reference variable
//    int &b = a;  // reference variable
//    cout<<a<<endl;
//    a++;
//    cout<<b<<endl;
//    b++;
//    cout<<a<<endl;

//   int a = 5;
//   solve(a);
//   cout<<a<<endl;
    
    int a = 5;
    int *p = &a;

    cout<<"before"<<p<<endl;
    solve(p);
    cout<<"after"<<p<<endl;

}

