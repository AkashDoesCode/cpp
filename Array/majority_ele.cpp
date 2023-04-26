#include <bits/stdc++.h>
using namespace std;

int possibleMajorityEle(int arr[], int n)
{
    int res=0;
    int count=1;
    for(int i=1;i<n;i++)
    {
        if(arr[res]==arr[i])
            count++;
        else
            count--;
        if(count==0){
            res=i;
            count=1;
        }
    }
    return res;
}

int isMajority(int arr[],int n)
{
    int res = possibleMajorityEle(arr,n);
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[res]==arr[i])
            count++;
    }
    return (count>n/2)?res:-1;
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
    cout<<"Majority element present in the index of : "<<isMajority(arr,n)<<endl;
    return 0;

}