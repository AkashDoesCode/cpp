#include <bits/stdc++.h>
using namespace std;

int secondLargest(int arr[],int n)
{
    int second_largest=-1;
    int largest =0;
    for(int i=1;i<n;i++)
    {
        if(arr[i]>arr[largest])
        {
            second_largest=largest;
            largest=i;
        }
        else if(arr[i]!=arr[largest])
        {
            if(second_largest==-1 || arr[i]>arr[second_largest])
            {
                second_largest=i;
            }
        }
    }
    return second_largest;
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
    cout<<"second largest : "<<arr[secondLargest(arr,n)]<<endl;
    return 0;

}