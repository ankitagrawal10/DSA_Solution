#include <iostream>
using namespace std;


// topic -> static keyword

// class abc
// {
// public:
//     static int x, y;
//     void print()
//     {
//         cout << "x is->" << x << " y is->" << y << endl;
//     }
// };

class abc
{
public:
    int x, y;
    abc() : x(0), y(0) {}
    static void print()
    {
        printf("i am in static %s\n", __FUNCTION__);
    }
};

// int abc::x;
// int abc::y;

int main()
{

    // abc obj1 = {1, 2};
    // abc obj2 = {4, 6};
    // obj1.print();
    // obj2.print();

    // abc obj1;
    // obj1.x = 1;
    // obj1.y = 2;
    // obj1.print();
    // abc obj2;
    // obj2.x = 10;
    // obj2.y = 20;
    // obj2.print();
    // obj1.print();

    abc obj1;
    abc::print();
    abc obj2;
    abc::print();
    abc::print();
}