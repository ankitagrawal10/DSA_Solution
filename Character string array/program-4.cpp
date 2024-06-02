#include<iostream>
#include<string>
using namespace std;


bool valid(char ch){
    if(ch>='a'&&ch<='z'|| ch>='A' && ch<='Z'||ch>='0'&& ch<='9'){
        return 1;
    }
    return 0;   

}

char tolowercase(char ch){
    if((ch>='a'&&ch<='z') || (ch>='0'&& ch<='9')){
        return ch;
    }
    else{
        char temp = ch-'A'+'a';
        return ch;
    }
}

bool checkpalidrom(string a){
    int s = 0;
    int e = a.length()-1;
    if(a[s]!=a[e]){
        return 0;
    }
    else{
        
        s++;
        e--;
    }
    return 1;
}
bool ispalidrome(string s){
    
    string temp = "";
    for(int j =0;j<=s.length();j++){
        if(valid(s[j])){
            temp.push_back(s[j]);
       }
    }

    for(int j = 0;j<temp.length();j++){
        temp[j] = tolowercase(temp[j]);
    }
    return checkpalidrom(temp);
}

int main(){
    string name;
    cout<<"enter your string"<<endl;
    cin>>name;
    cout<<ispalidrome(name);
}
