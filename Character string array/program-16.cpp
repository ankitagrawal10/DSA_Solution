#include<iostream>
#include<string>
using namespace std;

bool checkpalidrome(string str, int s , int e)
{
    while(s<=e)
    { 
        if(str[s]==str[e])
        {
            s++;
            e--;
        }
        else
        {
           return false; 
        }
    }
    return true;
}
bool validpalindrome(string str)
{
    int s = 0;
    int e = str.length()-1;
    while(s<=e)
    {
        if(str[s]==str[e])
        {
            s++;
            e--;
        }
        else
        {
           return checkpalidrome(str,s+1,e) || checkpalidrome(str,s,e-1);
          
        }
        return true;
    }
    return false;
}
int main()
{
    string str = "cbca";
    cout<<validpalindrome(str);
}
