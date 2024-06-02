#include<iostream>
#include<string>
using namespace std;

string removeadjacent(string ch){
    for(int i = 0;i<ch.length();i++){
        for(int j = 1;j<ch.length();j++){

            if(ch[i]==ch[j]){
               
            }

            else{
                i++;
                j++;
            }


        }
    }
}