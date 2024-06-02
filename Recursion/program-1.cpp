#include<iostream>
using namespace std;


int factorial(int n){
    cout<<"function is called for n:"<<n<<endl;
    // base case
    if(n==1){
        return 1;
    }
    // int ans = n*factorial(n-1);
    int chottiproblemAns = factorial(n-1);
    int biggerproblemAns = n*chottiproblemAns;
    return biggerproblemAns;
}
int main(){
    int n;
    cout<<"enter your number"<<endl;
    cin>>n;
    int ans = factorial(n);
    cout<<"Answer is:"<<ans<<endl;

}