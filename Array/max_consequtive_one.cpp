#include <bits/stdc++.h>
using namespace std;

int maxConsequtiveOne(int arr[],int n)
{
    int max_count=0;
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==1)
            count++;
        else
            count=0;
        max_count=max(max_count,count);
    }
    return max_count;
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
    cout<<"Maximum consequtive one in an array is : "<<maxConsequtiveOne(arr,n)<<endl;
    return 0;

}