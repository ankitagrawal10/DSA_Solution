#include <iostream>
using namespace std;

// polymorphism -> compile-time polymorphism -> function overloading
class math
{
public:
    double sum(int a, int b)
    {
        return a + b;
    }
    double sum(int a, int b, int c)
    {
        return a + b + c;
    }
    double sum(int a, float b)
    {
        return a + b;
    }
};

// polymorphism -> compile-time polymorphism -> operator overloading
class param
{
public:
    int val;

    void operator+(param &obj2)
    {
        int value1 = this->val;
        int value2 = obj2.val;
        cout << (value2 - value1) << endl;
    }
};

// polymorphism -> Runtime polymorphism -> function overriding

class Animal
{
public:
    Animal()
    {
        cout << "i am inside the animal constructor" << endl;
    }
    virtual void speak()
    {
        cout << "speaking" << endl;
    }
};

class Dog : public Animal
{
public:
    Dog()
    {
        cout << "i am inside the dog constructor" << endl;
    }
    void speak()
    {
        cout << "barking" << endl;
    }
};

int main()
{
    // math obj;
    // cout << obj.sum(4, 5.9f);

    // param obj1, obj2;
    // obj1.val = 7;
    // obj2.val = 2;
    // obj1 + obj2;

    // Dog a;
    // a.speak();

    // Dog *b = new Dog();
    // b->speak();

    Animal *a = new Dog(); // upcasting
    a->speak();

    Dog *b = (Dog *)new Animal(); // Downcasting
    b->speak();
}