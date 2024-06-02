#include <iostream>
using namespace std;

const int N = 3; // Assuming a 3x3 matrix

void rotate90deg(int arr[][N])
{
    // Transpose the matrix
    for (int i = 0; i < N; i++) {
        for (int j = i; j < N; j++) {
            swap(arr[i][j], arr[j][i]);
        }
    }

    // Reverse each row
    for (int i = 0; i < N; i++) {
        int low = 0, high = N - 1;
        while (low < high) {
            swap(arr[i][low], arr[i][high]);
            low++;
            high--;
        }
    }
}

int main()
{
    int arr[N][N] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    rotate90deg(arr);

    // Print the rotated matrix
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
