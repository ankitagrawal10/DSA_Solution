#include<iostream>
#include "program-11.h"
using namespace std;

// topic -> abstraction in c++

void birddoesSomething(Bird *&bird){
    bird -> eat();
    bird -> fly();
    bird -> eat();

}

int main(){
    Bird *bird = new eagle();
    // Bird b = new Bird();  // can't be create a bird object because bird as a interface
    birddoesSomething(bird);
}

