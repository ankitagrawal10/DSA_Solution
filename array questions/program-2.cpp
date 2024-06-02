#include<iostream>
using namespace std;

int getMin(int num[], int n) {

   // int mini = INT8_MAX;
    int mini = num[0];
    
    for(int i = 0; i<n; i++) {
        
       // mini = min( mini, num[i]);
        
        if(num[i] < mini){
           mini = num[i];
        }
    }

    //returning min value
    return mini;
}

int getMax(int num[], int n) {

    //int maxi = INT8_MIN;
    int maxi = num[0];
    
    for(int i = 0; i<n; i++) {

        //maxi = max(maxi, num[i]);

       if(num[i] > maxi){
           maxi = num[i];
       }
    }

    //returning max value
    return maxi;
}

int main() {

    int size;
    cout<<"enter your number in a array :-"<<endl;
    cin >> size;


    int num[100];

    //taking input in array
    for(int i = 0; i<size; i++) {
        
        cin >> num[i];
    }


    cout << " Maximum value is " << getMax(num, size) << endl;
    cout << " Minimum value is " << getMin(num, size) << endl;


    return 0;
}