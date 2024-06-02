#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // 1.solid rectangle
    // int n;
    // cin>>n;
    // for(int i = 0;i<n;i++){
    //     for(int j = 0;j<n;j++){
    //         cout<<" * ";
    //     }
    //     cout<<endl;

    // }

    // 2.Hollow rectangle
    // int rowcount;
    // int colcount;
    // cin>>rowcount;
    // cin>>colcount;

    // for (int row = 0; row < rowcount; row++)
    // {
    //     if (row == 0 || row == rowcount - 1)
    //     {
    //         for (int col = 0; col < colcount; col++)
    //         {
    //             cout << " * ";
    //         }
    //     }
    //     else
    //     {
    //         cout << " * ";

    //         for (int space = 0; space < colcount - 2; space++)
    //         {
    //             cout << "   ";
    //         }
    //         cout << " * ";
    //     }
    //     cout << endl;
    // }

    // Hollow rectangle another solution
    // int n;
    // cin>>n;
    // for(int row=0;row<n;row++){
    //     for(int col=0;col<n;col++){
    //         if(row==0||row==n-1||col==0||col==n-1){
    //             cout<<"*"<<" ";
    //         }
    //         else{
    //             cout<<"  ";
    //         }
    //     }
    //     cout<<endl;
    // }

    // 3.half payaramid
    // int n;
    // cin >> n;
    // for (int row = 0; row < n; row++)
    // {
    //     for (int col = 0; col < row + 1; col++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    // 4.inverted half payaramid
    // int n;
    // cin >> n;
    // for (int row = 0; row < n; row++)
    // {
    //     for (int col = 0; col < n-row ; col++)
    //     {
    //         cout << " * ";
    //     }
    //     cout << endl;
    // }

    // 5.numeric half payaramid
    // int n;
    // cin >> n;
    // for (int row = 0; row < n; row++)
    // {
    //     for (int col = 0; col < row + 1; col++)
    //     {
    //         cout << col+1<<" ";
    //     }
    //     cout << endl;
    // }

    // 6.full pyaramid
    // int n;
    // cin>>n;
    // for (int row = 0; row < n; row++)
    // {
    //     for (int space = 0; space < n-row-1 ; space++)
    //     {
    //         cout<<"   ";

    //     }
    //     for( int col =0; col<2*row+1;col++){
    //         cout<<" * ";
    //     }

    //     cout<<endl;
    // }

    // 7.full pyarmid
    //    int n;
    //    cin>>n;
    //    for(int row=0; row<n;row++){

    //     for(int col = 0; col <n-row-1;col++){
    //         cout<<" ";
    //     }
    //     for(int col = 0 ; col<row+1; col++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    //    }

    //  8.inverted full pyarmid
    // int n;
    // cin >> n;
    // for (int row = 0; row < n; row++)
    // {

    //     for (int col = 0; col < row; col++)
    //     {
    //         cout << " ";
    //     }
    //     for (int col = 0; col < n - row; col++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // 9.hellow inverted half pyaramid
    // int n;
    // cin >> n;
    // for (int row = 0; row < n; row++)
    // {
    //     for (int col = 0; col < n; col++)
    //     {
    //         if (row == 0 || col == 0 || col == n - row - 1)
    //         {
    //             cout << "*";
    //         }
    //         else
    //         {
    //             cout << " ";
    //         }
    //     }
    //     cout << endl;
    // }

    // 10.hollow full pyaramid
    // int n;
    // cin >> n;

    // for (int row = 0; row < n; row++)
    // {
    //     int k = 0;
    //     for (int col = 0; col < ((2 * n) - 1); col++)
    //     {
    //         if (col < n - row - 1)
    //         {
    //             cout << " ";
    //         }
    //         else if (k < 2 * row + 1)
    //         {
    //             if (k == 0 || k == 2 * row || row == n - 1)
    //             {
    //                 cout << "*";
    //             }
    //             else
    //             {
    //                 cout << " ";
    //             }
    //             k++;
    //         }
    //         else
    //         {
    //             cout << " ";
    //         }
    //     }

    //     cout << endl;
    // }

    // 11.solid diamond
    // int n;
    // cin >> n;
    // for (int row = 0; row < n; row++)
    // {

    //     for (int col = 0; col < n - row - 1; col++)
    //     {
    //         cout << " ";
    //     }
    //     for (int col = 0; col < row + 1; col++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // for (int row = 0; row < n; row++)
    // {
    //     for (int col = 0; col < row; col++)
    //     {
    //         cout << " ";
    //     }
    //     for (int col = 0; col < n - row; col++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // 12. hollow diamond

    // int n;
    // cin >> n;
    // for (int row = 0; row < n; row++)
    // {

    //     for (int col = 0; col < n - row - 1; col++)
    //     {
    //         cout << " ";
    //     }
    //     for (int col = 0; col < 2 * row + 1; col++)
    //     {
    //         if (col == 0 || col == 2 * row)
    //         {
    //             cout << "*";
    //         }
    //         else
    //         {
    //             cout << " ";
    //         }
    //     }
    //     cout << endl;
    // }
    // for (int row = 0; row < n; row++)
    // {
    //     for (int col = 0; col < row; col++)
    //     {
    //         cout << " ";
    //     }

    //     for (int col = 0; col < 2 * n - 2 * row - 1; col++)
    //     {
    //         if (col == 0 || col == 2 * n - 2 * row - 2)
    //         {
    //             cout << "*";
    //         }
    //         else
    //         {
    //             cout << " ";
    //         }
    //     }
    //     cout << endl;
    // }

    // 13.flipped solid Diamond

    // int n;
    // cin >> n;
    // for (int row = 0; row < n; row++)
    // {
    //     for (int col = 0; col < n - row; col++)
    //     {
    //         cout << "*";
    //     }
    //     for (int col = 0; col < 2 * row + 1; col++)
    //     {
    //         cout << " ";
    //     }
    //     for (int col = 0; col < n - row; col++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    // for (int row = 0; row < n; row++)
    // {
    //     for (int col = 0; col < row + 1; col++)
    //     {
    //         cout << "*";
    //     }
    //     for (int col = 0; col < 2 * n - 2 * row - 1; col++)
    //     {
    //         cout << " ";
    //     }
    //     for (int col = 0; col < row + 1; col++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    // 14.fancy pattern-1
    // int n;
    // cin >> n;
    // for (int row = 0; row < n; row++)
    // {
    //     for (int col = 0; col < row + 1; col++)
    //     {
    //         cout << row + 1;
    //         if (col != row)
    //         {
    //             cout << "*";
    //         }
    //     }
    //     cout << endl;
    // }

    // for (int row = 0; row < n; row++)
    // {
    //     for (int col = 0; col < n - row; col++)
    //     {
    //         cout << n - row;
    //         if (col != n - row - 1)
    //         {
    //             cout << "*";
    //         }
    //     }
    //     cout << endl;
    // }

    // 15.numeric palindrome pyramid
    // int n;
    // cin >> n;
    // for (int row = 0; row < n; row++)
    // {
    //     for (int col = 0; col < row + 1; col++)
    //     {
    //         cout << col + 1;
    //     }
    //     for (int col = row; col >= 1; col--)
    //     {
    //         cout << col;
    //     }
    //     cout << endl;
    // }

    // 16.Alphabitical palindrome pyramid
    // int n;
    // cin >> n;
    // for (int row = 0; row < n; row++)
    // {
    //     for (int col = 0; col < row + 1; col++)
    //     {
    //         int ans = col + 1;
    //         char ch = ans + 'A' - 1;
    //         cout << ch << " ";
    //     }
    //     for (int col = row; col >= 1; col--)
    //     {
    //         int ans = col;
    //         char ch = ans + 'A' - 1;
    //         cout << ch << " ";
    //     }
    //     cout << endl;
    // }

    // 17.fancy pattern-2

    // int n;
    // cin >> n;
    // for (int row = 0; row < n; row++)
    // {
    //     for (int col = 0; col < n - row + 3; col++)
    //     {
    //         cout << "*";
    //     }
    //     for (int col = 0; col < row + 1; col++)
    //     {
    //         cout << row + 1;
    //         if (col != row)
    //         {
    //             cout << "*";
    //         }
    //     }
    //     for (int col = 0; col < n - row + 3; col++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    // 18.solid Half diamond

    // int n;
    // cin >> n;
    // for (int row = 0; row < n; row++)
    // {
    //     for (int col = 0; col < row + 1; col++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
    // for (int row = 0; row < n; row++)
    // {
    //     for (int col = 0; col < n-row-1; col++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    // 19.floyd's Triangle pattern
    // int n;
    // cin >> n;
    // int count = 0;
    // for (int row = 0; row < n; row++)
    // {

    //     for (int col = 0; col < row + 1; col++)
    //     {
    //         int ans = count + 1;
    //         cout << ans << " ";
    //         count++;
    //     }
    //     cout << endl;
    // }

    //  20.Butterfly pattern

    // int n;
    // cin >> n;
    // for (int row = 0; row < n; row++)
    // {
    //     for (int col = 0; col < row + 1; col++)
    //     {
    //         cout << "*";
    //     }

    //     for (int col = 0; col < n - 2 * row + 2; col++)
    //     {
    //         cout << " ";
    //     }
    //     for (int col = 0; col < row + 1; col++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
    // for (int row = 0; row < n; row++)
    // {
    //     for (int col = 0; col < n - row; col++)
    //     {
    //         cout << "*";
    //     }
    //     for (int col = 0; col < 2 * row; col++)
    //     {
    //         cout << " ";
    //     }
    //     for (int col = 0; col < n - row; col++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    // 21.fancy pattern-3

    // int n;
    // cin >> n;
    // int count = 0;
    // for (int row = 0; row < n; row++)
    // {

    //     for (int col = 0; col < row + 1; col++)
    //     {
    //         int ans = count + 1;
    //         cout << ans;
    //         count++;

    //         if (col != row)
    //         {
    //             cout << "*";
    //         }
    //     }
    //     cout << endl;
    // }

    // int start = count - n + 1;
    // for (int row = 0; row < n; row++)
    // {
    //     int k = start;
    //     for (int col = 0; col < n - row; col++)
    //     {
    //         cout << k;
    //         k++;
    //         if (col != n - row - 1)
    //         {
    //             cout << "*";
    //         }
    //     }
    //     start = start - (n - row - 1);

    //     cout << endl;
    // }

    // 22.Numeric Hallow inverted half pyramid

    // int n;
    // cin >> n;

    // for (int row = 0; row < n; row++)
    // {
    //     for (int col = row + 1; col <= n; col++)
    //     {
    //         if (col == row + 1 || col == n || row == 0)
    //         {
    //             cout << col;
    //         }
    //         else
    //         {
    //             cout << " ";
    //         }
    //     }
    //     cout << endl;
    // }

    // 23. Numeric hollow half pyramid

    // int n;
    // cin >> n;
    // for (int row = 0; row < n; row++)
    // {
    //     for (int col = 0; col < row + 1; col++)
    //     {
    //         if (col == 0 || row == n - 1 || col == row)
    //         {
    //             cout << col + 1;
    //         }
    //         else
    //         {
    //             cout << " ";
    //         }
    //     }
    //     cout << endl;
    // }

    // 24.numeric palindrome equilateral pyramid

    // int n;
    // cin >> n;
    // for (int row = 0; row < n; row++)
    // {
    //     for (int col = 0; col < n - row - 1; col++)
    //     {
    //         cout << " ";
    //     }
    //     for (int col = 0; col < row + 1; col++)
    //     {
    //         cout << col + 1;
    //     }
    //     for (int col = row; col >= 1; col--)
    //     {
    //         cout << col;
    //     }

    //     cout << endl;
    // }

    // 25.fancy pattern-4

    // int n;
    // cin >> n;
    // cout << "*\n";
    // for (int row = 0; row < n; row++)
    // {
    //     cout << "*";
    //     for (int col = 0; col < row + 1; col++)
    //     {
    //         cout << col + 1;
    //     }
    //     for (int col = row; col >= 1; col--)
    //     {
    //         cout << col;
    //     }
    //     cout << "*";
    //     cout << endl;
    // }
    // for (int row = n - 1; row >= 1; row--)
    // {
    //     cout << "*";
    //     for (int col = 0; col < row - 1; col++)
    //     {
    //         cout << col + 1;
    //     }
    //     for (int col = row; col >= 1; col--)
    //     {
    //         cout << col;
    //     }
    //     cout << "*";
    //     cout << endl;
    // }
    // cout << "*";

    // 26.pascal triangle

    // int n;
    // cin >> n;
    // for (int row = 0; row < n; row++)
    // {
    //     int c = 1;
    //     for (int col = 0; col < row+1; col++)
    //     {
    //         cout << c;
    //         c = c * (row - col) / col;
    //     }
    //     cout << endl;
    // }

    // 27.numeric full pyramid
    //  int n;
    //  cin >> n;
    //  for (int row = 0; row < n; row++)
    //  {
    //      for (int col = 0; col < n - row - 1; col++)
    //      {
    //          cout << " ";
    //      }

    //     for (int col = 0; col < row + 1; col++)
    //     {
    //         cout << row + col + 1;
    //     }
    //     int start = 2 * row;
    //     for (int col = 0; col < row; col++)
    //     {
    //         cout << start;
    //         start--;
    //     }
    //     cout << endl;
    // }

    // 28.numeric hallow pyramid

    // int n;
    // cin >> n;
    // for (int row = 0; row < n; row++)
    // {
    //     for (int col = 0; col < n - row - 1; col++)
    //     {
    //         cout << " ";
    //     }
    //     int start = 1;
    //     for (int col = 0; col < 2 * row + 1; col++)
    //     {
    //         if (row == 0 || row == n - 1)
    //         {
    //             if (col % 2 == 0)
    //             {
    //                 cout << start;
    //                 start++;
    //             }
    //             else
    //             {
    //                 cout << " ";
    //             }
    //         }
    //         else
    //         {
    //             if (col == 0)
    //             {
    //                 cout << col + 1;
    //             }
    //             else if (col == 2 * row)
    //             {
    //                 cout << row + 1;
    //             }
    //             else
    //             {
    //                 cout << " ";
    //             }
    //         }
    //     }
    //     cout << endl;
    // }

    // 29.left arrow
    // int n;
    // cin >> n;
    // for (int row = 0; row < n; row++)
    // {
    //     for (int col = 0; col < n - row - 1; col++)
    //     {
    //         cout << " ";
    //     }
    //     for (int col = 0; col < 2 * row + 1; col++)
    //     {
    //         if (col == 0 || row == n - 1)
    //         {
    //             cout << "*"
    //                  << " ";
    //         }
    //     }
    //     cout << endl;
    // }
    // for (int row = 0; row < n; row++)
    // {
    //     for (int col = 0; col < row + 1; col++)
    //     {
    //         cout << " ";
    //     }
    //     cout << "*";
    //     cout << endl;
    // }

    // 30. pattern

    // int n;
    // cin >> n;
    // for (int row = 0; row < n; row++)
    // {
    //     for (int col = 0; col < n; col++)
    //     {
    //         if (row == 0 || row == n - 1 || col == 0 || col == n - 1)
    //         {
    //             cout << "*";
    //         }
    //         else
    //         {
    //             cout << " ";
    //         }
    //     }
    //     cout << endl;
    // }
}
