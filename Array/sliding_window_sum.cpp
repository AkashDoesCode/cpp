#include <bits/stdc++.h>
using namespace std;

int slidingWindow(int arr[],int n,int k)
{
    if(k>n)
        return -1;
    int curr_res=0;
    for(int i=0;i<k;i++)
    {
        curr_res+=arr[i];
    }
    int res=curr_res;
    for(int i=k;i<n;i++)
    {
        curr_res=curr_res+arr[i]-arr[i-k];
        res=max(res,curr_res);
    }
    return res;
    
}

int main(){
    int n,k;
    cout<<"Enter array size and k"<<endl;
    cin>>n>>k;
    int arr[n];
    cout<<"Enter array elements"<<endl;
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Maximum sum of k contegeous number is : "<<slidingWindow(arr,n,k)<<endl;
    return 0;

}