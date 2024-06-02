#include <iostream>
using namespace std;


// topic -> macros
#define pi 3.15 // macro
#define maxx(x, y) x > y ? x : y

float circlearea(float r)
{
    return pi * r * r;
}

void fun()
{
    int x = 6;
    int b = 17;
    int c = maxx(x, b);
    cout << c << endl;
}

int main()
{
    cout << circlearea(65.4) << endl;
    fun();
}