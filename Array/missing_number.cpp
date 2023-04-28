#include <bits/stdc++.h>
using namespace std;

int missingNumber(int arr[],int n)
{
    int temp[n+1]={0};
    for(int i=0;i<n-1;i++)
    {
        temp[arr[i]]=1;
    }
    int i=1;
    for(i=1;i<=n;i++)
    {
        if(temp[i]==0)
        break;
    }
    return i;
}

int main(){
    int n;
    cout<<"Enter array size"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter array elements"<<endl;
    for(int i = 0; i < n-1; i++)
    {
        cin>>arr[i];
    }
    cout<<"Missing element in the array is : "<<missingNumber(arr,n);
    return 0;

}