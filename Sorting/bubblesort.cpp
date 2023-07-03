#include <bits/stdc++.h>
using namespace std;

void bubblesort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        bool swapped = false;
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                swapped=false;
            }
        }
        if(swapped)
            break;
    }
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
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
    bubblesort(arr,n);
    return 0;
}
