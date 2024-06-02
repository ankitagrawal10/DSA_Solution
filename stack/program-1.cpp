#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<int> st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    cout<<"element on top is: "<<st.top()<<endl;
    cout<<"size of stack is: "<<st.size()<<endl;

    if(st.empty())
    {
        cout<<"stack is empty"<<endl;
    }

    else
    {
        cout<<"stack is not empty"<<endl;

    }

    while(!st.empty())
    {
        cout<<st.top()<<endl;
        st.pop();
    }
}
