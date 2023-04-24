#include <bits/stdc++.h>
using namespace std;

int removeDuplicate(int arr[],int n)
{
    int res=1;
    for (int i=1; i<n; i++)
    {
        if(arr[i]!=arr[res-1])
            res++;
    }
    return res;
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
    cout<<"Array size without duplicates :"<<removeDuplicate(arr,n)<<endl;
    return 0;

}