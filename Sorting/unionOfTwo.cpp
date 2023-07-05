#include <bits/stdc++.h>
using namespace std;

void unionOfTwo(int arr1[],int arr2[],int n,int m)
{
    int i=0;
    int j=0;
    while(i<n && j<m)
    {
        if(i>0 && arr1[i]==arr1[i-1])
        {
            i++;
            continue;
        }
        if(arr1[i]<arr2[j])
        {
            cout<<arr1[i]<<" ";
            i++;
        }
        else if(arr1[i]>arr2[j])
        {
            cout<<arr2[j]<<" ";
            j++;
        }
        else
        {
            cout<<arr1[i]<<" ";
            i++;
            j++;
        }
    }
    while (i<n)
    {
        if(i>0 && arr1[i]==arr1[i-1])
            continue;
        else
            cout<<arr1[i]<<" ";
        i++;
    }
    while (j<m)
    {
        if(j>0 && arr2[j]==arr2[j-1])
            continue;
        else
            cout<<arr2[j]<<" ";
        j++;
    }
    
}

int main()
{
    int n,m;
    cout<<"Enter first array size"<<endl;
    cin>>n;
    cout<<"Enter second array size"<<endl;
    cin>>m;
    int arr1[n],arr2[m];
    cout<<"Enter first array elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr1[i];
    }
     cout<<"Enter second array elements"<<endl;
    for(int i=0;i<m;i++)
    {
        cin>>arr2[i];
    }
    unionOfTwo(arr1,arr2,n,m);
    return 0;
}
