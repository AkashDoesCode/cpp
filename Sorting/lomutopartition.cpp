#include <bits/stdc++.h>
using namespace std;

void lomutopartition(int arr[],int l,int h)
{
    int pivot=arr[h];
    int i=l-1;
    for(int j=0;j<=h-1;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[h]);
    for(int i=0;i<=h;i++)
    {
        cout<<arr[i]<<" ";
    }
    return ;
}

int main()
{
    int n;
    cout<<"Enter array size"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter array elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int l,h;
    cout<<"enter l and h"<<endl;
    cin>>l>>h;
    lomutopartition(arr,l,h);
    return 0;
}
