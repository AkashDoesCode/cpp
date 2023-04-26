#include <bits/stdc++.h>
using namespace std;

int trappingRain(int arr[], int n)
{
    int leftMax[n];
    int rightMax[n];

    int lmax=arr[0];
    int rmax=arr[n-1];
    for(int i=1;i<n;i++)
    {
        lmax=max(lmax,arr[i]);
        leftMax[i]=max(lmax,arr[i]);
    }
    for(int i=n-2;i>=0;i--)
    {
        rmax=max(rmax,arr[i]);
        rightMax[i]=max(rmax,arr[i]);
    }

    int res=0;
    for(int i=1; i<n-1;i++)
    {
        res+=(min(leftMax[i],rightMax[i])-arr[i]);
    }
    return res;
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
    cout<<"Maximum water we can store : "<<trappingRain(arr,n)<<endl;
    return 0;

}