#include <bits/stdc++.h>
using namespace std;

void boundaryElement(vector<vector<int>> &v)
{
    int n = v[0].size();
    int row=v.size();
    int col=n;
    if(row==1)
    {
        for(int i=0;i<col;i++)
        {
            cout<<v[0][i]<<" ";
        }
         return ;
    }
    if(col==1)
    {
        for(int i=0;i<row;i++)
        {
            cout<<v[i][0]<<" ";
        }
        return ;
    }
    for(int i=0;i<col;i++)
    {
        cout<<v[0][i]<<" ";
    }
    for(int i=1;i<row;i++)
    {
        cout<<v[i][col-1]<<" ";
    } 
    for(int i=col-2;i>=0;i--)
    {
        cout<<v[row-1][i]<<" ";
    }
    for(int i=row-2;i>=1;i--)
    {
        cout<<v[i][0]<<" ";
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
    boundaryElement(v);
    return 0;
}