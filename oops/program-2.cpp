#include <iostream>
using namespace std;

// Base class
class Animal
{
public:
    int age;
    int weight;

    
    void eat()
    {
        cout << "eating" << endl;
    }
};

// Derived class
class Dog : private Animal
{
    public:
    void print(){
        cout<<this->age<<endl;
    }

};

// class Animal
// {
// private:
//     int age;
//     int weight;

// public:

//     Animal(){
//         cout<<"constructor called"<<endl;
//     }

//     Animal(Animal &obj){
//         this->age = obj.age;
//         this->weight = obj.weight;
//         cout<<"copy constructor called"<<endl;
//     }
//     void eat()
//     {
//         cout << "eating" << endl;
//     }

//     int getage()
//     {
//         return this->age;
//     }
//     void setage(int age)
//     {
//         this->age = age;
//         cout<<"this is a set method"<<endl;
//     }
// };
int main()
{
    // Animal a;
    // a.setage(101);
    // a.eat();

    // Animal b(a);

    Dog d1;
    d1.print();
}