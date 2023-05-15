#include <bits/stdc++.h>
using namespace std;

void setZeros(vector<vector<int>> &matrix)
{
	// Write your code here.
	int n=matrix.size();
	int m=matrix[0].size();

	vector<pair<int,int>>v;

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(matrix[i][j]==0)
				v.push_back(make_pair(i,j));
		}
	}
    // for(int i=0;i<v.size();i++)
    // {
    //     cout<<v[i].first<<","<<v[i].second<<endl;
    // }
	for(int i=0;i<v.size();i++)
	{
		int first=v[i].first;
		int second=v[i].second;
		int row=first;
		int col=second;
		while(col<m)
		{
			matrix[row][col]=0;
			col++;
		}
		col=second;
		while(col>=0)
		{
			matrix[row][col]=0;
			col--;
		}
        col=second;
		while(row<n)
		{
			matrix[row][col]=0;
			row++;
		}
		row=first;
		while(row>=0)
		{
			matrix[row][col]=0;
			row--;
		}
	}
    cout<<"Matrix is : "<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<"\n";
    }

}

int main()
{
    int row, col;
    cout << "Enter row and column" << endl;
    cin >> row >> col;
    vector<vector<int>> matrix(row, vector<int>(col));
    cout << "Enter the matrix" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> matrix[i][j];
        }
    }
    setZeros(matrix);
    return 0;
}