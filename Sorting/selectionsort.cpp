#include <bits/stdc++.h>
using namespace std;

void selectionsort(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        int min_id=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min_id])
                min_id=j;
        }
        swap(arr[i],arr[min_id]);
    }
    for(int i=0;i<n;i++)
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
    selectionsort(arr,n);
    return 0;
}
