#include <bits/stdc++.h>
using namespace std;

void mergeTwoSortedArray(int arr1[],int arr2[],int n,int m)
{
   int i=0;
   int j=0;
   vector<int>v;
   while(i<n && j<m)
   {
        if(arr1[i]<=arr2[j])
        {
            v.push_back(arr1[i]);
            i++;
        }
        else
        {
            v.push_back(arr2[j]);
            j++;
        }
   }
   while(i<n)
   {
        v.push_back(arr1[i]);
        i++;
   }
   while(j<m)
   {
        v.push_back(arr2[j]);
        j++;
   }
   for(int i=0;i<v.size();i++)
   {
        cout<<v[i]<<" ";
   }
}

int main()
{
    int n,m;
    cout<<"Enter first array size"<<endl;
    cin>>n;
    cout<<"Enter second array size"<<endl;
    cin>>m;
    int arr1[n],arr2[m];
    cout<<"Enter first array elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr1[i];
    }
     cout<<"Enter second array elements"<<endl;
    for(int i=0;i<m;i++)
    {
        cin>>arr2[i];
    }
    mergeTwoSortedArray(arr1,arr2,n,m);
    return 0;
}
