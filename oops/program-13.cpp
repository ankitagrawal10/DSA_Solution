#include<iostream>
using namespace std;

// topic-> virtual in c++

// class bird{
//     public:
//     virtual void fly(){
//         cout<<"bird is flying"<<endl;
//     }
//     void eat(){
//         cout<<"bird is eating"<<endl;
//     }
// };

// class sparrow : public bird{
//     public:
//     void fly(){
//         cout<<"sparrow is flying"<<endl;
//     }
//     void eat(){
//         cout<<"sparrow is eating"<<endl;
//     }
// };

// virtual ctor & dtor concept
class base{
    public:
    base(){
        cout<<"base ctor\n";
    }
    virtual ~base(){
        cout<<"base dtor\n";
    }
};

class derived:public base{
    public:
    derived(){
        cout<<"derived ctor\n";
    }
    ~derived(){
        cout<<"derived dtor\n";
    }
};

int main()
{
    // bird *b = new sparrow();
    // b->fly();
    // b->eat();

    base *b = new derived();
    delete b;

}