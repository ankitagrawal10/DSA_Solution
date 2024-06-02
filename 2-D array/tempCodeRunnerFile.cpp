#include <iostream>
#include <vector>
using namespace std;

int rotate90deg(int arr[][3], int n1, int n2)
{
    int startingrow = 0;
    int endingrow = n1 - 1;
    int startingcol = 0;
    int endingcol = n2 - 1;

   for(startingcol = 0; startingcol<endingcol;startingcol++)
   {
    cout<<[startingrow][endingcol];
   }
   startingrow++;   
}
int main()
{
    int arr[3][3] = {{1, 2, 3} ,{4, 5, 6},
                   {7, 8, 9}};

    int n1 = 3;
    int n2 = 3;

    rotate90deg(arr,n1,n2);
}