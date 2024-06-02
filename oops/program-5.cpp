#include <iostream>
using namespace std;

// topic -> const keyword
class abc
{
    mutable int x;
    int *y;
    int z;

public:
    // ctor : old style
    // abc(int _x, int _y, int _z = 0) // default arugment
    // {
    //     x = _x;
    //     y = new int(_y);
    //     z = _z;
    // }

    // initialization list -> new method of written a constructor 
    abc(int _x , int _y ,int _z = 0):x(_x) , y(new int (_y)),z(_z) {}

    int getx() const
    {
        x = 10;
        return x;
    }

    void setx(int x)
    {
        this->x = x;
    }

    int gety() const
    {
        return *y;
    }

    void sety(int val)
    {
        val = *y;
    }

    int getz() const
    {
        return z;
    }
};

void printabc(const abc &a)
{
    cout << a.getx() << " " << a.gety() << " " << a.getz() << endl;
}

int main()
{
    abc a(1, 2);
    printabc(a);
    //    cout<<a.getx();
    //    cout<<" ";
    //    cout<<a.gety();
}
int main2()
{
    // const int a = 5;
    // cout<<a<<endl;

    // 2. const with pointer
    // const int *a = new int(50);  // const data , non-const pointer
    // int const *a = new int(2);  // same as line no. 13
    // cout<<*a<<endl;
    // // *a = 2;  // cant change the content of pointer.
    // // cout<<*a<<endl;
    // int b = 5;
    // a = &b;  // pointer itself can be ressigned.
    // cout<<*a<<endl;

    // 3. const pointer , but non-const data
    // int *const a = new int(2);
    // cout<<*a<<endl;
    // *a = 20;
    // cout<<*a<<endl;
    // int b = 50;
    // a = &b;
    // cout<< *a <<endl;

    // 4. const pointer , const data
    // const int *const a = new int(10);
    // cout<<*a<<endl;
    // *a = 50;
    // int b = 100;
    // a = &b;
    // cout<<*a<<endl;
}