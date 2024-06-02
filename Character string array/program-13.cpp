#include <iostream>
#include <string>
using namespace std;

int compare(string a, string b)
{
    if (a.length() != b.length())
    {
        return false;
    }
    else
    {

        for (int i = 0; i < a.length(); i++)
        {
            if (a[i] != b[i])
            {
                return false;
            }
        }
    }
    return true;
}


int main()
{
    string str;
    cin >> str;
    cout << str << endl;
    cout << "length:" << str.length() << endl;
    cout << "isempty:" << str.empty() << endl;
    str.push_back('A');
    cout << str << endl;
    str.pop_back();
    cout << str << endl;
    cout << str.substr(0, 2) << endl;

    string a = "love";
    string b = "love";

    if (a.compare(b) == 0)
    {
        cout << "a and b are exactly same" << endl;
    }
    else
    {
        cout << "a and b are not same" << endl;
    }

    cout << compare(a, b) << endl;

    string sentence = "hello jee kaise ho saare";
    string target = "everyone";
    cout << sentence.find(target) << endl;
    if (sentence.find(target) == string::npos)
    {
        cout << "not found" << endl;
    }

    string sr = "this is my first message";
    string word = "babber";
    sr.replace(0, 4, word);
    cout << sr << endl;
    sr.erase(10, 2);
    cout << sr << endl;
}