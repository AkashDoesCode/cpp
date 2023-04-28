#include <bits/stdc++.h>
using namespace std;

void unionIntersection(int arr1[],int arr2[],int a,int b)
{
    int i=0;
    int j=0;
    while(i<a && j<b)
    {
        if(arr1[i]<arr2[j])
        {
            cout<<arr1[i]<<" ";
            i++;
        }
        else if(arr1[i]>arr2[j])
        {
            cout<<arr2[j]<<" ";
            j++;
        }
        else
        {
            cout<<"Intersetion of the two array : "<<arr1[i]<<endl;
            j++;
        }
    }
    while(i<a)
    {
        cout<<arr1[i]<<" ";
        i++;
    }
    while(j<b)
    {
        cout<<arr2[j]<<" ";
        j++;
    }
    return ;
}

int main(){
    int a,b;
    cout<<"Enter arrays size"<<endl;
    cin>>a>>b;
    int arr1[a],arr2[b];
    cout<<"Enter array elements"<<endl;
    for(int i = 0; i < a; i++)
    {
        cin>>arr1[i];
    }
    cout<<"Enter array elements"<<endl;
    for(int i = 0; i < b; i++)
    {
        cin>>arr2[i];
    }
    unionIntersection(arr1,arr2,a,b);
    return 0;

}