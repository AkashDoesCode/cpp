#include <bits/stdc++.h>
using namespace std;

int maxOddEven(int arr[],int n)
{
    int count=1;
    int max_count=INT_MIN;
    for(int i=1;i<n;i++)
    {
        if((arr[i]%2==0 && arr[i-1]%2!=0) || (arr[i]%2!=0 && arr[i-1]%2==0))
        {
            count++;
        }
        else{
            count=1;
        }
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
    cout<<"Maximum length of odd even subarray : "<<maxOddEven(arr,n)<<endl;
    return 0;

}