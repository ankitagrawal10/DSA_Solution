// // #include <iostream>
// // using namespace std;
// // int main()
// // {
// //     int n;
// //     cout << "enter your number" << endl;
// //     cin >> n;
// //     for (int i = 1; i <= n; i++)
// //     {
// //         for(int space = n-i; space;space--){
// //             cout<<" ";
// //         }
// //         for(int j=1;j<=i;j++){
// //             cout<<"*";
// //         }
// //         cout<<endl;
// //     }
// // }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "enter your number" << endl;
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         for(int space = n-i; space;space--){
//             cout<<" ";
//         }
//         for(int j=1;j<=i;j++){
//             cout<<i;
//         }
//         cout<<endl;
//     }
// }

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter your number" << endl;
    cin >> n;
    int count = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int space = n - i; space; space--)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << count;
            count = count + 1;
        }
        cout << endl;
    }
}
