#include <bits/stdc++.h>
using namespace std;

void sortthreetype(int arr[],int n)
{
    int i=0;
    int j=0;
    int k=n-1;
    while(i<j){
        if(arr[i]==2){
            swap(arr[i],arr[j]);
            j--;
        }
        else if(arr[i]==1){
            i++;
            j++;
        }
        else{
            swap(arr[i],arr[j]);
            i++;
        }
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
    sortthreetype(arr,n);
    return 0;
}
