#include <bits/stdc++.h>
using namespace std;


vector<int>prefix;

void prefixSum(int arr[],int n)
{
    prefix.push_back(arr[0]);
    for(int i=1;i<n;i++)
    {
        prefix.push_back(prefix[i-1]+arr[i]);
    }
}

bool equillibriumPoint()
{
    int n=prefix.size();
    for(int i=0;i<n;i++)
    {
        int leftSum=(i>0)?prefix[i-1]:0;
        int rightSum=(i<n-1)?prefix[n-1]-prefix[i]:0;

        if(leftSum==rightSum)
            return true;
    }
    return false;
}

int main(){
    
    int n;
    cout<<"Enter array size"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter array elements"<<endl;
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    prefixSum(arr,n);
    cout<<"Equillibrium point is present : "<<(equillibriumPoint()?"yes":"no")<<endl;
    return 0;

}