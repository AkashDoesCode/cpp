#include <bits/stdc++.h>
using namespace std;

int recursiveBinarySearch(int arr[],int n,int ele,int left,int right)
{
    int mid = (left+right)/2;
    if(left>right)
        return -1;
    if(arr[mid]==ele)
        return mid;
    else if(arr[mid]<ele)
        return recursiveBinarySearch(arr,n,ele,mid+1,right);
    else
        return recursiveBinarySearch(arr,n,ele,left,mid-1);
}

int binarySearch(int arr[],int n,int ele)
{
    int left=0;
    int right=n-1;
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
    cout<<"Search element is present at the location "<<recursiveBinarySearch(arr,n,ele,0,n-1);
    return 0;
}
