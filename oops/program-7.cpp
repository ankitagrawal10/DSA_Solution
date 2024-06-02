#include <iostream>
using namespace std;


// topic -> shallow and deep copy
class abc
{
public:
    int x;
    int *y;

    abc(int _x, int _y) : x(_x), y(new int(_y)) {}

    // default dumb copy constructor: it does shallow copy
    abc(const abc &obj)
    {
        x = obj.x;
        y = obj.y;
    }

    // Deep copy
    // abc(const abc &obj)
    // {
    //     x = obj.x;
    //     y = new int(*obj.y);
    // }

    void print() const
    {
        printf("x:%d\nPTR y: %p\nContent of Y (*y):%d\n\n", x, y, *y);
    }

    ~abc(){
        delete y;
    }
};
int main()
{
    // abc a(1, 2);
    // a.print();
    // abc b = a;
    // b.print();

    abc *a = new abc(1,2);
    abc b = *a;
    delete a;
    b.print();
}