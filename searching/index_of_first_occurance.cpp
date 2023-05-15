#include <bits/stdc++.h>
using namespace std;

int lastIndex(int arr[], int n, int ele)
{
    int left = 0;
    int right = n - 1;
    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (arr[mid] == ele)
        {
            if (mid == n - 1 || arr[mid + 1] != arr[mid])
                return mid;
            else
                left = mid + 1;
        }
        else if (arr[mid] > ele)
            right = mid - 1;
        else
            left = mid + 1;
    }
    return -1;
}

int firstIndex(int arr[], int n, int ele)
{
    int left = 0;
    int right = n - 1;
    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (arr[mid] == ele)
        {
            if (mid == 0 || arr[mid - 1] != arr[mid])
                return mid;
            else
                right = mid - 1;
        }
        else if (arr[mid] > ele)
            right = mid - 1;
        else
            left = mid + 1;
    }
    return -1;
}

int countOccurance(int arr[], int n, int ele)
{
    int first = firstIndex(arr, n, ele);
    int last = lastIndex(arr, n, ele);
    if (first == -1)
        return 0;
    else
        return last - first + 1;
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
    int ele;
    cout << "Enter the element to be searched" << endl;
    cin >> ele;
    cout << "First occurance of searched element " << firstIndex(arr, n, ele) << endl;
    cout << "Last occurance of searched element " << lastIndex(arr, n, ele) << endl;
    cout << "Count of occurance the sorted array " << countOccurance(arr, n, ele) << endl;
    return 0;
}
