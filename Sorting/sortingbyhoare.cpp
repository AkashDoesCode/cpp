#include <bits/stdc++.h>
using namespace std;

int hoarepartition(int arr[],int l,int h)
{
    int pivot=arr[l];
    int i=l-1;
    int j=h+1;
    while (true){  
        do{
            i++;
        }while(arr[i]<pivot);
        do{
            j--;
    }while(arr[j]>pivot);
    if(i>=j) return j;
    swap(arr[i],arr[j]);
    }
}

void quicksort(int arr[],int l,int h){
    if(l<h){
        int p = hoarepartition(arr,l,h);
        quicksort(arr,l,p);
        quicksort(arr,p+1,h);
    }
}

int main()
{
    int n;
    cout<<"Enter array size"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter array elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    quicksort(arr,0,n-1);
    cout<<"sorted array"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
