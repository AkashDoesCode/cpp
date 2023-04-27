#include <bits/stdc++.h>
using namespace std;


bool subarraySum(int arr[],int n,int sum)
{
    int j=0;
    int res=0;
    for(int i=0;i<n;i++)
    {
        res+=arr[i];
        while(res>sum)
        {
            res=res-arr[j];
            j++; 
        }
        if(sum==res)
            return true;
    }
    return false;
}



int main(){
    int n,sum;
    cout<<"Enter array size and sum"<<endl;
    cin>>n>>sum;
    int arr[n];
    cout<<"Enter array elements"<<endl;
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Given sum is present in the array : "<<(subarraySum(arr,n,sum)?"yes":"no")<<endl;
    return 0;

}