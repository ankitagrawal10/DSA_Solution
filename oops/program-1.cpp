#include <iostream>
using namespace std;

class Animal
{
    // state or properties
private:
    int weight;

public:
    int age;

    string name;

    // default constructor
    Animal()
    {
        this->weight = 0;
        this->age = 0;
        this->name = "";
        cout << "constructor called" << endl;
    }

    // parameterised constructor
    Animal(int age)
    {
        this->age = age;
        cout << "parametrized constructor called" << " "<< this->age << endl;
    }

    // copy constructor
    Animal(Animal &obj)
    {
        this->age = obj.age;
        this->weight = obj.weight;
        this->name = obj.name;
        cout << "copy constructor called" << endl;
    }

    // behaviour
    void eat()
    {
        cout << "eating" << endl;
    }

    void sleep()
    {
    }

    int getWeight()
    {
        return weight;
    }

    void setWeight(int weight)
    {
        this->weight = weight;
    }

    void print()
    {
        cout << this->age << " " << this->weight << " " << this->name << endl;
    }

    ~Animal(){
        cout<<"I am a destructor"<<endl;
    }
};

int main()
{
    // cout << "size of empty class is " << sizeof(Animal) << endl;

    // static allocation
    // Animal ramesh;
    // ramesh.age = 20;
    // ramesh.name = "lion";
    // cout << " age of ramesh is: " << ramesh.age << endl;
    // cout << " name of ramesh is: " << ramesh.name << endl;

    // ramesh.eat();

    // // access the private member
    // ramesh.setWeight(101);
    // cout << "weight" << ramesh.getWeight() << endl;

    // Dynamic memory
    // Animal *suresh = new Animal(50);
    // (*suresh).age = 15;
    // (*suresh).name = "kv";

    // suresh->age = 15;
    // suresh->name = "kutta";

    // suresh->eat();

    // Animal *k = new Animal();
    // Animal a(10);
    // Animal *b = new Animal(100);

    // // Animal c = a;
    // Animal c(a);

    // Animal a;
    // a.age = 20;
    // a.setWeight(101);
    // a.name = "babber";

    // Animal b = a;
    // a.print();
    // b.print();

    // a.name[0] = 'G';
    // a.print();
    // b.print();

    Animal a;
    a.age = 5;  // automatically called desconstructor 

    Animal *b = new Animal();
    b->age = 12;
    // manually
    delete b;
}