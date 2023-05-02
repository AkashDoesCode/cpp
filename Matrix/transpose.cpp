#include <bits/stdc++.h>
using namespace std;

void transpose(vector<vector<int>> &v)
{
    int row = v.size();
    int col = v[0].size();
    for (int i = 0; i < row - 1; i++)
    {
        for (int j = i + 1; j < col; j++)
        {
            swap(v[i][j], v[j][i]);
        }
    }
    cout << "Transpose of matrix is : " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << v[i][j] << " ";
        }
        cout << "\n";
    }
    return;
}

int main()
{
    int row, col;
    cout << "Enter row and column" << endl;
    cin >> row >> col;
    vector<vector<int>> v(row, vector<int>(col));
    cout << "Enter the matrix" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> v[i][j];
        }
    }
    transpose(v);
    return 0;
}