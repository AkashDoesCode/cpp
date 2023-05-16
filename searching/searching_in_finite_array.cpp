#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[],int n,int ele,int l,int r)
{
    int left=l;
    int right=r;
    while(left<=right)
    {
        int mid=(left+right)/2;
        if(arr[mid]==ele)
            return mid;
        else if(arr[mid]>ele)
            right=mid-1;
        else
            left=mid+1;
    }
    return -1;
}


int searchingFinite(int arr[],int n,int ele)
{
    if(arr[0]==ele)
        return 0;
    int i=1;
    while(arr[i]<ele)
        i=i*2;
    if(arr[i]==ele)
        return i;
    return binarySearch(arr,n,ele,i/2+1,i-1);
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
    int ele;
    cout<<"Enter the element to be searched"<<endl;
    cin>>ele;
    cout<<"Search element is present at the location "<<searchingFinite(arr,n,ele);
    return 0;
}
