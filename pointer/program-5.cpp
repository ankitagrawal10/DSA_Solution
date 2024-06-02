// Double Pointer
#include <iostream>
using namespace std;

void update(int **p2){
    // p2 = p2+1;  change nhi hoga

    // *p2 = *p2 +1; change hoga 

    // **p2 = **p2+1;  change hoge

}
int main()
{
    int i = 5;
    int *p = &i;
    int **p2 = &p; // double pointer
    cout << "printing p" << p << endl;
    cout << "address of p" << &p << endl;
    cout << "value of p2" << *p2 << endl;
    cout << **p2 << endl;

    cout<<endl;
    cout<<endl;

    cout<<&i<<endl;
    cout<<p<<endl;
    cout<<*p2<<endl;

    cout<<endl;
    cout<<endl;

    cout<<&p<<endl;
    cout<<p2<<endl;

    cout<<endl<<endl;
    cout<<" before "<<i<<endl;
    cout<<" before "<<p<<endl;
    cout<<" before "<<p2<<endl;
    update(p2);
    cout<<" after "<<i<<endl;
    cout<<" after  "<<p<<endl;
    cout<<" after "<<p2<<endl;
    cout<<endl<<endl;





    return 0;
}