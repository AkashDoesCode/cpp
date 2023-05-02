#include <bits/stdc++.h>
using namespace std;

void snakePattern(vector<vector<int>> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < v[i].size(); j++)
                cout << v[i][j] << " ";
        }
        else
        {
            for (int j = v[i].size() - 1; j >= 0; j--)
                cout << v[i][j] << " ";
        }
    }
    return ;
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
    snakePattern(v);
    return 0;
}