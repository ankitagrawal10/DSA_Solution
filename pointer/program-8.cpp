#include <iostream>
using namespace std;

// void changesign(int *p)
// {
//     *p = (*p) * -1;
// }

// void square(int *p)
// {
//     int a = 10;
//     p = &a;
//     *p = (*p) * (*p);
// }

// void q(int z)
// {
//     z += z;
//     cout << z << " ";
// }
// void p(int *y)
// {
//     int x = *y + 2;
//     q(x);
//     *y = x - 1;
//     cout << x << " ";
// }

// int f(int x, int*py , int **ppz){
//     int y,z;
//     **ppz +=1;
//     z = **ppz;
//     *py+=2;
//     y = *py;
//     x+=3;
//     return x+y+z;
// }

void increment(int **p){
    (**p)++;
}
int main()
{
    // question no -1

    // float f = 10.5;
    // float p = 2.5;
    // float *ptr = &f;
    // (*ptr)++;
    // *ptr = p;
    // cout<<*ptr<<" "<<f<<" "<<p;

    // question no -2

    // int a = 7;
    // int b = 17;
    // int *c = &b;
    // *c = 7;
    // cout<<a<<" "<<b<<endl;

    // question no -3

    // int *ptr = 0;
    // int a= 10;
    // *ptr = a;
    // cout<<*ptr<<endl;

    // question no -4

    // char ch = 'a';
    // char *ptr = &ch;
    // ch++;
    // cout<<*ptr<<endl;

    // question no -5

    // int a = 7;
    // int *c = &a;
    // c = c+1;
    // cout<<a<<" "<<*c<<endl;

    // question no -6

    // int  a = 7;
    // int *c = &a;
    // cout<<c<<endl;
    // c = c+3;
    // cout<<c<<endl;

    // question no -7
    // int a[5];
    // int *C;
    // cout<<sizeof(a)<<" "<<sizeof(c)<<endl;

    // question no -8
    // int a[] = {1,2,3,4};
    // cout<<*a<<" "<<*(a+1)<<endl;

    // question no -9
    // int a[] = {1,2,3,4};
    // int *p = a++;
    // cout<<*p<<endl;

    // question no - 10
    // char b[] = "xyz";
    // char *c = &b[0];
    // cout<<c<<endl;

    // question no - 11
    // char s[] = "hello";
    // char *p = s;
    // cout<<s[0]<<" "<<p[0]<<endl;

    // question no - 12
    // char arr[20];
    // int i;
    // for(i = 0; i<10;i++){
    //     *(arr+i)= 65+i;
    // }
    // *(arr+i) = '\0';
    // cout<<arr;
    // return 0;

    // question no - 13
    // char *ptr;
    // char str[] = "abcdefg";
    // ptr = str;
    // ptr+= 5;
    // cout<<ptr;

    // question no - 14
    // int number[5];
    // int *p;
    // p = number;
    // *p = 10;
    // p = &number[2];
    // *p = 20;
    // p--;
    // *p = 30;
    // p = number+3;
    // *p = 40;
    // p = number;
    // *(p+4) = 50;
    // for(int n = 0; n<5; n++){
    //     cout<<number[n]<<" "<<endl;
    // }

    // question no - 15
    // char st[]  = "ABCD";
    // for(int i = 0; st[i]!='\0';i++){
    //     cout<<st[i]<<*(st)+i<<*(i+st)<<i[st]<<endl;
    // }

    // question no - 16
    // float arr[5]  = {12.5,10.0,13.5,90.5,0.5};
    // float *ptr1 = &arr[0];
    // float *ptr2 = ptr1+3;
    // cout<<*ptr2<<" ";
    // cout<<ptr2-ptr1;

    // question no - 17
    // int a = 10;
    // changesign(&a);
    // cout<<a<<endl;

    // question no - 18
    // int a = 10;
    // square(&a);
    // cout<<a<<endl;

    // question no - 19
    // int x = 5;
    // p(&x);
    // cout << x;

    // question no - 20
    // int a = 10;
    // int *p = &a;
    // int **q = &p;
    // int b = 20;
    // *q = &b;
    // (*p)++;
    // cout<<a<<" "<<b<<endl;

    // question no - 21
    // int c, *b, **a;
    // c = 4;
    // b = &c;
    // a = &b;
    // cout<<f(c,b,a);

    // question no - 22
    // int ***r, **q ,*p, i = 8;
    // p = &i;
    // (*p)++;
    // q = &p;
    // (**q)++;
    // r = &q;
    // cout<<*p<<" "<<**q<<" "<<***r;


    // question no - 23
    // int num = 10;
    // int *ptr = &num;
    // increment(&ptr);
    // cout<<num<<endl;

}