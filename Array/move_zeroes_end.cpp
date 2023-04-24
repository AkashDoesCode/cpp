#include <bits/stdc++.h>
using namespace std;

void moveZeroes(int arr[],int n)
{
    int i=0;
    int j=n-1;
    while(i<j)
    {
        if(arr[i]==0 && arr[j]!=0)
        {
            swap(arr[i],arr[j]);
            i++;j--;
        }
        else if(arr[i]!=0 && arr[j]==0)
        {
            j--;
        }
        else if(arr[i]==0 && arr[j]==0)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    for(int k=0;k<n;k++)
    {
        cout<<arr[k]<<" ";
    }


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
    moveZeroes(arr,n);
    return 0;

}