#include <iostream>
#include <string.h>
using namespace std;

int palindrome(char name[])
{
    int s = 0;
    int n = strlen(name);
    int e = n - 1;
    while (s <= e)
    {
        if (name[s] == name[e])
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

void upper(char name[])
{
    int n = strlen(name);
    char ans = -1;
    for(int i = 0; i<n;i++)
    {
        ans = name[i]-'a'+'A';
        if(name[i]==' ')
        {
            cout<<' ';
        }
        cout<<ans;

    } 
}

void lower(char name[])
{
    int n = strlen(name);
    
    for(int i = 0; i<n;i++)
    {
        char ans = name[i]-'A'+'a';
        if(name[i]==' ')
        {
            cout<<' ';
        }
        cout<<ans;
    } 
}
int main()
{
    // char name[100];
    // cout<<"enter your name"<<endl;
    // // cin >> name;
    // getline(cin,name);
    // // cin.getline(name,50);
    // cout<<name;

    // for (int i = 0; i < 5; i++)
    // {
    //     cout << " index " << i << " values " << name[i] << endl;
    // }

    // int value = (int)name[5];
    // cout<<" values "<<value<<endl;

    // char ch[100];
    // cout<<"enter your name"<<endl;
    // cin>>ch;
    // cin.getline(ch,20);
    // int length = 0;
    // int i = 0;
    // while(ch[i]!='\0')
    // {
    //     length++;
    //     i++;
    // }
    // cout<<length;
    // for(int i = 0; ch[i]!='\0';i++)
    // {
    //     length++;
    // }
    // cout<<length;

    // char ch[100] = {'A', 'n', 'k', 'i', 't'};
    // int s = 0;
    // int n = 5;
    // int e = n - 1;
    // while (s <= e)
    // {
    //     swap(ch[s], ch[e]);
    //     s++;
    //     e--;
    // }
    // cout << ch;

    // char ch[100];
    // cout << "enter your name" << endl;
    // // cin>>ch;
    // cin.getline(ch, 100);
    // for (int i = 0; i < strlen(ch) != 0; i++)
    // {
    //     if (ch[i] == ' ')
    //     {
    //         ch[i] = '@';
    //     }
    // }
    // cout<<ch<<endl;

    char name[100];
    cout << "enter your name" << endl;
    // cin >> name; 
    cin.getline(name,50);
    // cout<<"palindrome: "<<palindrome(name)<<endl;
    //upper(name);
    // cout<<endl;
    lower(name);
}