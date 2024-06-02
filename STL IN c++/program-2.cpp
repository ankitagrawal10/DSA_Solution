#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    cout << "Capacity of vector " << v.capacity() << endl;

    v.push_back(1);
    cout << "Capacity of vector " << v.capacity() << endl;

    v.push_back(2);
    cout << "Capacity of vector " << v.capacity() << endl;

    v.push_back(3);
    cout << "capacity of vector " << v.capacity() << endl;

    v.push_back(4);
    cout << "capacity of vector " << v.capacity() << endl;
    cout << " Size of vector " << v.size() << endl;

    cout << " index of vector " << v.at(2) << endl;

    cout << "First element " << v.front() << endl;
    cout << "Last element " << v.back() << endl;

    cout << "Before pop" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    v.pop_back();
    cout << "After pop" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << " Before clear " << v.size() << endl;
    v.clear();
    cout << " After clear " << v.size() << endl;

    vector<int> a(5,1);
    vector<int> last(a);
    cout << "print a" << endl;
    for (int i : last)
    {
        cout << i << " ";
    }
    cout << endl;

}