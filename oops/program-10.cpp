#include <iostream>
using namespace std;

// topic -> inline function
// inline void numbershow(int num){
//     cout<< num << endl;
// }

// int main(){
//     numbershow(12);

// }

// topic -> friend keyword

// class A
// {
// private:
//     int x;

// public:
//     A(int _val) : x(_val){};

//     int getx() const
//     {
//         return x;
//     }

//     int setx(int _val)
//     {
//         x = _val;
//     }
//     friend class B;
//     friend void print(const A &);
// };

// class B
// {
// public:
//     void print(const A &a)
//     {
//         // cout<<a.getx() << endl;
//         cout << a.x << endl;
//     }
// };

// void print(const A &a)
// {
//     cout << a.x << endl;
// }

// int main()
// {
//     A a(5);
//     B b;
//     b.print(a);
//     print(a);
// }


// topic -> can constructor have private ? -> yes
class Box
{
    int width;


    Box(int _w) : width(_w){};

public:
    int getwidth() const
    {
        return width;
    }

    void setwidth(int _val)
    {
        width = _val;
    }

    friend class boxfactory;
};

class boxfactory{
    int count;
    public:
    Box getabox(int _w){
        ++count;
        return Box(_w);
    }
};
int main()
{
    // Box b(5);
    // cout << b.getwidth() << endl;

    boxfactory bfact;
    Box b = bfact.getabox(5);
    cout<<b.getwidth()<<endl;
}
