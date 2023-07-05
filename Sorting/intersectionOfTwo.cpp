#include <bits/stdc++.h>
using namespace std;

void intersectionOfTwo(int arr1[],int arr2[],int n,int m)
{
    int i=0;
    int j=0;
    while(i<n && j<m)
    {
        if(i>0 && arr1[i]==arr1[i-1])
        {
            i++;continue;
        }
        if(arr1[i]<arr2[j])
            i++;
        else if(arr1[i]>arr2[j])
            j++;
        else
        {
            cout<<arr1[i]<<" ";
            i++;
            j++;
        }
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
    intersectionOfTwo(arr1,arr2,n,m);
    return 0;
}
