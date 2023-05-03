#include <bits/stdc++.h>
using namespace std;

void searchInSorted(vector<vector<int>> &v, int val)
{

    int row = v.size();
    int col = v[0].size();
    int i = 0;
    int j = col - 1;
    while (i < row && j >= 0)
    {
        if (v[i][j] == val)
        {
            cout << val << " is present in "
                 << "(" << i << "," << j << ")"
                 << "position" << endl;
            return ;
        }
        else if (v[i][j] > val)
            j--;
        else
            i++;
    }
    cout << val << " not present in the matrix" << endl;
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
    int searchingEle;
    cout << "Enter the element to search in the matrix" << endl;
    cin >> searchingEle;
    searchInSorted(v, searchingEle);
    return 0;
}