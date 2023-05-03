#include <bits/stdc++.h>
using namespace std;

int row;
int col;

void spiralRotate(vector<vector<int>> &v)
{
    row=v.size();
    col=v[0].size();
    int top_left=0;
    int bottom_left=0;
    int top_right=col-1;
    int bottom_right=row-1;

    cout<<"Spiral rotation of the array is : "<<endl;
    while(top_left<top_right && bottom_left<bottom_right)
    {
        for(int i=top_left;i<=top_right;i++)
        {
            cout<<v[top_left][i]<<" ";
        }
        top_left++;
        for(int i=top_left;i<=bottom_right;i++)
        {
            cout<<v[i][top_right]<<" ";
        }
        top_right--;
        for(int i=top_right;i>=bottom_left;i--)
        {
            cout<<v[bottom_right][i]<<" ";
        }
        bottom_right--;
        for(int i=bottom_right;i>=top_left;i--)
        {
            cout<<v[i][bottom_left]<<" ";
        }
        bottom_left++;
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
    spiralRotate(v);
    return 0;
}