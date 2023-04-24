#include <bits/stdc++.h>
using namespace std;


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
    int max_value=INT_MIN;
    for(int i=0 ; i < n;i++)
    {
        max_value=max(max_value,arr[i]);
    }
    cout<<"Maximum value of the array is : "<<max_value<<endl;
    return 0;

}