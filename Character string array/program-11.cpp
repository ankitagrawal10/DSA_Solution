#include <iostream>
#include <string>
using namespace std;

int compress(char ch[], int n)
{
    int i = 0;
    int ansindex = 0;
    while (i <= n)
    {
        int j = i + 1;
        while (j < n && ch[i] == ch[j])
        {
            j++;
        }

        ch[ansindex++] = ch[i];
        int count = j - 1;

        if (count > 1)
        {
            string cnt = to_string(count);
            for (char chars : cnt)
            {
                ch[ansindex++] = chars;
            }
            i = j;
        }
        return ansindex;
    }
}

int main()
{

    char ch[5];
    int n = 5;
    cout << "enter your character" << endl;
    cin >> ch;
    cout << compress(ch, 5);
}