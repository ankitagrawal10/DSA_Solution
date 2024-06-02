#include <iostream>
#include <string>
using namespace std;

char lowercase(char ch)
{
    if (ch >= 'a' && ch <= 'z')
    {
        return ch;
    }
    else
    {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool checkpalindrom(char name[], int n)
{
    int s = 0;

    int e = n - 1;
    while (s <= e)
    {
        if (lowercase(name[s]) != lowercase(name[e]))
        {
            return 0;
        }
        else
        {
           
            s++;
            e--;
        }
    }
    return 1;
}

int getlength(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

int main()
{
    char arr[50];

    cout << "Enter a character" << endl;
    cin >> arr;
    int len = getlength(arr);
    cout << checkpalindrom(arr, len);
}
