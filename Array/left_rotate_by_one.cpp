#include <bits/stdc++.h>
using namespace std;

void leftRotate(int arr[],int n)
{
    int temp = arr[0];
    for(int i=1;i<n;i++)
    {
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return ;
    
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
    leftRotate(arr,n);
    return 0;

}