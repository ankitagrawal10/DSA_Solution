#include<iostream>
#include<map>
using namespace std;

int main(){
    map<int,string>m;
    m[1]="Ankit";
    m[2]="Agrawal";
    m.insert ({5,"ankit"});

    for(auto i : m){
        cout<<i.first<<" "<<i.second<<endl;
    }
}
