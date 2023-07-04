#include <bits/stdc++.h>
using namespace std;

void mergeTwo(int arr[], int arr1[], int arr2[], int n, int m)
{
    
}

void merge(int arr[], int low, int mid, int high)
{
    int n = mid - low + 1;
    int m = high - mid;
    int arr1[n];
    int arr2[m];

    for (int i = 0; i < n; i++)
        arr1[i] = arr[low + i];
    for (int j = 0; j < m; j++)
        arr2[j] = arr[mid + 1 + j];

    int i = 0;
    int j = 0;
    int k = low;
    while (i < n && j < m)
    {
        if (arr1[i] <= arr2[j])
        {
            arr[k] = arr1[i];
            k++;
            i++;
        }
        else
        {
            arr[k] = arr2[j];
            k++;
            j++;
        }
    }
    while (i < n)
    {
        arr[k] = arr1[i];
        k++;
        i++;
    }
    while (j < m)
    {
        arr[k] = arr2[j];
        k++;
        j++;
    }
    return;
}

void mergesort(int arr[],int left,int right)
{
    if(left<right)
    {
        int mid=(left+right)/2;
        mergesort(arr,left,mid);
        mergesort(arr,mid+1,right);
        merge(arr,left,mid,right);
    }
}


int main()
{
    int n;
    cout << "Enter array size" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter array elements" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    mergesort(arr,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
