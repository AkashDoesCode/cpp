#include <bits/stdc++.h>
using namespace std;

int profit(int arr[], int n)
{
    int profit=0;
    for(int i=1;i<n;i++)
    {
        if(arr[i] > arr[i-1])
        {
            profit+=(arr[i]-arr[i-1]);
        }
    }
    return profit;
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
    cout<<"Maximum profit : "<<profit(arr,n)<<endl;
    return 0;

}