#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<string>s;
    s.push("Ankit");
    s.push("Agrawal");
    cout<<"top element"<<s.front()<<endl;
    s.pop();  
    cout<<"top element"<<s.front()<<endl;
    cout<<"top element"<<s.empty()<<endl;

    // max heap
    priority_queue<int> maxi;

    //min heap
    priority_queue<int,vector<int>,greater<int> >mini;

    maxi.push(1);
    maxi.push(2);
    maxi.push(3);
    maxi.push(4);

    int n = maxi.size();
    for(int i =  0;i<n;i++){
        cout<<maxi.top()<<" ";
        maxi.pop();
    }
    cout<<endl;

    mini.push(0);
    mini.push(20);
    mini.push(13);
    mini.push(04);

    int m = mini.size();
    for(int i =  0; i<m;i++){
        cout<<mini.top()<<" ";
        mini.pop();
    }
    cout<<endl;
}


