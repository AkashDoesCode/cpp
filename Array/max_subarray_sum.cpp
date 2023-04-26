#include <bits/stdc++.h>
using namespace std;

int maxSubarraySum(int arr[],int n)
{
    int maxEnding=arr[0];
    int res=arr[0];
    for (int i = 1; i < n; i++)
    {
        maxEnding=max(arr[i],maxEnding+arr[i]);
        res=max(res,maxEnding);
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
    cout<<"Maximum subarray sum of the array is : "<<maxSubarraySum(arr,n)<<endl;
    return 0;

}