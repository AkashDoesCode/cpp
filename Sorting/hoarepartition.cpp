#include <bits/stdc++.h>
using namespace std;

void hoarepartition(int arr[],int l,int h)
{
    int pivot=arr[l];
    int i=l-1;
    int j=h+1;
    while (true)
    {
        /* code */
        
    do{
        i++;
    }while(arr[i]<pivot);
    do{
        j--;
    }while(arr[j]>pivot);
    if(i>=j) break;
    swap(arr[i],arr[j]);
    }
    
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
    hoarepartition(arr,l,h);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
