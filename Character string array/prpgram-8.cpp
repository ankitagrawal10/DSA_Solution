#include<iostream>
#include<string>
using namespace std;

string removeoccurence(string s,string part){
    while(s.length()!=0 && s.find(part)< s.length()){
        s.erase(s.find(part),part.length());
    }
    return s;
}

int main(){
    string name;
    cout<<"enter your character"<<endl;
    cin>>name;

    string part;
    cout<<"enter your part to remove it:" <<endl;
    cin>>part;

    cout<<removeoccurence(name,part);

}