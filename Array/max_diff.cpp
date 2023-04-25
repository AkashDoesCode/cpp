#include <bits/stdc++.h>
using namespace std;

int maxDiff(int arr[], int n)
{
    int res = arr[1]-arr[0];
    int minval=arr[0];
    for(int i=0;i<n;i++)
    {
        res=max(res,arr[i]-minval);
        minval=min(minval,arr[i]);
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
    cout<<"Maximum diff is : "<<maxDiff(arr,n)<<endl;
    return 0;

}