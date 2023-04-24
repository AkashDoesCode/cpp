#include <bits/stdc++.h>
using namespace std;

bool checkSorted(int arr[],int n)
{
    if(n==1)
        return true;
    for(int i=1;i<n;i++)
    {
        if(arr[i]<arr[i-1])
            return false;
    }
    return true;
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
    cout<<(checkSorted(arr,n)?"yes":"no")<<endl;
    return 0;

}