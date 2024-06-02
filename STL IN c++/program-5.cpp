#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<string>s;
    s.push("Ankit");
    s.push("Agrawal");
    cout<<"top element"<<s.top()<<endl;
    s.pop();
    cout<<"top element"<<s.top()<<endl;
    cout<<"top element"<<s.empty()<<endl;
}
