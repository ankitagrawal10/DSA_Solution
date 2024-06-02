#include <iostream>
#include <string>
using namespace std;

// // find the substring
// void palindrome(string str, int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i; j < n; j++)
//         {
//             for (int k = i; k <= j; k++)
//             {
//                 cout << str[k];
//             }
//             cout << endl;

//         }
//     }

// }

int expandsAroundIndex(string str, int i, int j)
{
    int count = 0;
    while (i >= 0 && j < str.length() && str[i]==str[j])
    {
        count++;
        i--;
        j++;
    }
    return count;
}
int countsubstring(string str)
{
    int count = 0;
    int n = str.length();
    for (int i = 0; i < n; i++)
    {
        int oddans = expandsAroundIndex(str, i, i);
        count = count + oddans;
        int evenans = expandsAroundIndex(str, i, i + 1);
        count = count + evenans;
    }
    return count;
}

int main()
{
    string str = "noon";
    cout<<countsubstring(str);
    return 0;
}
