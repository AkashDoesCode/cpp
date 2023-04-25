#include <bits/stdc++.h>
using namespace std;

void frequency(int arr[], int n)
{
    int count=1;
    for(int i=1;i<n;i++)
    {
        if(arr[i]==arr[i-1])
            count++;
        else
        {
            cout<<arr[i-1]<<"--"<<count<<" ";
            count=1;
        }
    }
    cout<<arr[n-1]<<"--"<<count<<" ";
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
    frequency(arr,n);
    return 0;

}