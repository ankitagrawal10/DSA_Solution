#if !defined(BIRD_H)
#define BIRD_H
#include <iostream>
using namespace std;

class Bird
{
public:
    virtual void eat() = 0;  // pure virtual function -> it is used as interface of another class.
    virtual void fly() = 0;
    // classes that inherits this class has to implement pure virtual functions.
};

class sparrow : public Bird
{
public:
    void eat()
    {
        cout << "sparrow is eating\n";
    }
    void fly()
    {
        cout << "sparrow is flying\n";
    }
};

class eagle : public Bird
{
public:
    void eat()
    {
        cout << "eagle is eating\n";
    }
    void fly()
    {
        cout << "eagle is flying\n";
    }
};


#endif //
