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

int getSum(int i,int j)
{
    if(i==0)
        return prefix[j];
    return prefix[j]-prefix[i-1];
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
    int i,j;
    cout<<"Enter the two index of the array : "<<endl;
    cin>>i>>j;
    prefixSum(arr,n);
    cout<<"Sum between i and j is : "<<getSum(i,j)<<endl;
    return 0;

}