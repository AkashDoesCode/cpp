#include <bits/stdc++.h>
using namespace std;

int searchingPeak(int arr[], int n)
{
    if (arr[0] > arr[1])
        return arr[0];
    if (arr[n - 1] > arr[n - 2])
        return arr[n - 1];
    int left = 0;
    int right = n - 1;
    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (mid>0 && mid<n-1 && arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1])
            return arr[mid];
        else if (mid < n-1 && arr[mid] > arr[mid+1])
            right = mid - 1;
        else
            left = mid + 1;
    }
    return -1;
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
    cout << "Peak element is  " << searchingPeak(arr, n);
    return 0;
}
