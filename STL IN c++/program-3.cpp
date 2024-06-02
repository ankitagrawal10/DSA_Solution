#include<iostream>
#include<deque>
using namespace std;

int main(){
    deque<int>d;
    d.push_back(1);
    d.push_front(2);
    d.push_front(3);
    for(int i:d){
        cout<<i<<" ";
    }

    cout<<endl;
    d.pop_front();
    for(int i:d){
        cout<<i<<" ";

    }
    cout<<endl;
    cout<<" first index "<<d.at(0)<<endl;
    cout<<"first index "<<d.front()<<endl;
    cout<<" last index "<<d.back()<<endl;
    cout<<" empty or not "<<d.empty()<<endl;
    cout<<" Before erase "<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+1);
    cout<<" After erase "<<d.size()<<endl;    
}