#include <iostream>
#include <string>
using namespace std;

bool checkEqual(int a[26], int b[26])
{
    for (int i = 0; i < 26; i++)
    {
        if (a[i] != b[i])
            return 0;
    }
}
bool checkclusion(string s1, string s2)
{
    int count1[26] = {0};
    for (int i = 0; i < s1.length(); i++)
    {
        int index = s1[i] - 'a';
        count1[index]++;
    }

    int i = 0;
    int windowsize = s1.length();
    int count2[26] = {0};

    while (i < windowsize && i < s2.length())
    {
        int index = s2[i] - 'a';
        count2[index]++;
        i++;
    }
    if (checkEqual(count1, count2))
    {
        return 1;
    }

    while (i < s2.length())
    {
        char newchar = s2[i];
        int index = newchar - 'a';
        count2[index]++;
        i++;

        char oldchar = s2[i - windowsize];
        index = oldchar - 'a';

        if (checkEqual(count1, count2))
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    string s1;
    cout << "Enter your s1" << endl;
    cin >> s1;

    string s2;
    cout << "Enter your s2" << endl;
    cin >> s2;

    checkclusion(s1, s2);

    return 0;
}