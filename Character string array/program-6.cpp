#include <iostream>
#include <string>
using namespace std;

char len(string name)
{
    int count = 0;
    for (int i = 0; name[i] != 0; i++)
    {
        count++;
    }
    return count;
}
char getmaxoccurence(string a)
{
    int arr[26] = {0};
    for (int i = 0; i < a.length(); i++)
    {
        char ch = a[i];
        int number = 0;
        if (ch >= 'a' && ch <= 'z')
        {
            number = ch - 'a';
        }
        else
        {
            number = ch - 'A';
        }
        arr[number]++;
    }
    // find maximum character
    int maxi = -1;
    int ans = 0;
    for (int i = 0; i < 26; i++)
    {
        if (maxi < arr[i])
        {
            ans = i;
            maxi = arr[i];
        }
    }
    char finalans = 'a' + ans;
    return finalans;
}
int main()
{
    string name;
    cout << "enter your string" << endl;
    cin >> name;
    cout << getmaxoccurence(name) << endl;
}
