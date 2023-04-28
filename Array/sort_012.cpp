#include <bits/stdc++.h>
using namespace std;

void sort(int arr[], int n)
{
    int i = 0;
    int j = n - 1;
    int k=0;
    while (i <= j)
    {
        if(arr[i]==2)
        {
            swap(arr[i],arr[j]);
            j--;
        }
        else if(arr[i]==1)
        {
            i++;
        }
        else
        {
            swap(arr[k],arr[i]);
            i++;k++;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return;
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
    sort(arr, n);
    return 0;
}