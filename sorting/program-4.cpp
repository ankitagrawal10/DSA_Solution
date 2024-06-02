#include <iostream>
#include <vector>
using namespace std;

bool issafe(int i, int j, int row, int col, int arr[][3], vector<vector<bool>> &visited)
{
    if ((i >= 0 && i < row) && (j >= 0 && j < col) && (arr[i][j] == 1) && (visited[i][j] == false))
    {
        return true;
    }
    else+
    {
        return false;
    }
}

void solvemaze(int arr[][3], int row, int col, int i, int j, vector<vector<bool>> &visited, vector<string> &path, string output)
{
    if (i == row - 1 && j == col - 1)
    {
        // answer found
        path.push_back(output);
        return;
    }

    // down -> i+1,j
    if (issafe(i + 1, j, row, col, arr, visited))
    {
        visited[i + 1][j] = true;
        solvemaze(arr, row, col, i + 1, j, visited, path, output + 'D');
        visited[i + 1][j] = false;
    }

    // left -> i ,j-1
    if (issafe(i, j - 1, row, col, arr, visited))
    {
        visited[i][j - 1] = true;
        solvemaze(arr, row, col, i, j - 1, visited, path, output + 'L');
        visited[i][j - 1] = false;
    }

    // right -> i,j+1
    if (issafe(i, j + 1, row, col, arr, visited))
    {
        visited[i][j + 1] = true;
        solvemaze(arr, row, col, i, j + 1, visited, path, output + 'R');
        visited[i][j + 1] = false;
    }

    // upper -> i-1, j
    if (issafe(i - 1, j, row, col, arr, visited))
    {
        visited[i - 1][j] = true;
        solvemaze(arr, row, col, i - 1, j, visited, path, output + 'U');
        visited[i - 1][j] = false;
    }
}

int main()
{
    int maze[][3] = {{1, 0, 0}, {1, 1, 0}, {1, 1, 1}};

    if (maze[0][0] == 0)
    {
        cout << "path is not exit" << endl;
        return 0;
    }

    int row = 3;
    int col = 3;

    vector<vector<bool>> visited(row, vector<bool>(col, false));
    visited[0][0] = true;

    vector<string> path;
    string output = "";

    solvemaze(maze, row, col, 0, 0, visited, path, output);

    cout << "printing the results" << endl;
    for (auto i : path)
    {
        cout << i << " ";
    }
    cout << endl;

    if (path.size() == 0)
    {
        cout << "no path exist" << endl;
    }

    return 0;
}
