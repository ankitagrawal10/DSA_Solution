#include <iostream>
using namespace std;

// // single-level-inheritance
// // base class
// class car{
//     public:
//     string name;
//     int weight;
//     int age;

//     void speedup(){
//         cout<<"speeding up"<<endl;
//     }

//     void breakmarro(){
//         cout<<"break maardi"<<endl;
//     }
// };

// // derived class
// class scorpio:public car{

// };

// multilevel inheritance
class fruit
{
public:
    string name;
};

class mango : public fruit
{
public:
    int weight;
};

class alphanso : public mango
{
public:
    int sugarlevel;
};

// multiple inheritance

class A
{
public:
    int chemistry;

    A()
    {
        chemistry = 14;
    }
};

class B
{
public:
    int chemistry;

    B()
    {
        chemistry = 3003;
    }
};

class c : public A, public B
{
public:
    int math;
};

// hierarical inheritance

class car
{
public:
    int age;
    int weight;

    void speedup()
    {
        cout << "speeding" << endl;
    }
};

class scopio : public car
{
};

class fortuner : public car
{
};
int main()
{
    // scorpio ankit;
    // ankit.speedup();
    // alphanso a;
    // cout<<a.name<<" "<<a.weight<<" "<<a.sugarlevel<<endl;

    // c obj;
    // cout << obj.A::chemistry << " " << obj.math << endl;

    scopio s11;
    s11.speedup();

    fortuner f11;
    f11.speedup();
}