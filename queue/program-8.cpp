#include <iostream>
#include <vector>
using namespace std;


// gasstation or circular tour question

int cancompletecircuit(vector<int> &gas, vector<int> &cost)
{
    int deficit = 0;
    int balance = 0;
    int start = 0;

    for (int i = 0; i < gas.size(); i++)
    {
        balance += gas[i] - cost[i];
        if (balance < 0)
        {
            deficit += balance;
            start = i + 1;
            balance = 0;
        }
    }

    if (balance + deficit >= 0)
    {
        return start;
    }
    else
    {
        return -1;
    }
}
int main()
{
    vector<int> gas = {1, 2, 3, 4, 5};
    vector<int> cost = {3, 4, 5, 1, 2};

    if(cancompletecircuit(gas,cost))
    {
        cout<<"circle is completed at index: "<<cancompletecircuit(gas,cost)<<endl;
    }

    else
    {
        cout<<"circle is not completed"<<endl;
    }
}