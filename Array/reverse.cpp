#include <bits/stdc++.h>
using namespace std;

void reverse(int arr[],int n)
{
    int i=0,j=n-1;
    while(i<j)
    {
        swap(arr[i],arr[j]);
        i++;j--;
    }
    cout<<"Reverse of the array : "<<"";
    for(int i = 0; i < n; i++)
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
    reverse(arr,n);
    return 0;

}