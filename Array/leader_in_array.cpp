#include <bits/stdc++.h>
using namespace std;

void leader(int arr[],int n)
{
    if(n==0)
    {
        cout<<"empty array"<<endl;
        return ;
    }
    cout<<arr[n-1]<<" ";
    int max_value=arr[n-1];
    for(int i=n-2;i>=0;i--)
    {
        if(arr[i]>max_value)
        {
           max_value=max(max_value,arr[i]);
           cout<<arr[i]<<" ";
        }
    }
    return ;
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
    leader(arr,n);
    return 0;

}