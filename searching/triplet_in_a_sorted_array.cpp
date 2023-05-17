#include <bits/stdc++.h>
using namespace std;

bool binarySearch(int arr[], int n, int sum, int x)
{
    int left = x;
    int right = n-1;
    while (left < right)
    {
        if (arr[left] + arr[right] == sum)
            return true;
        else if (arr[left] + arr[right] > sum)
            right--;
        else
            left++;
    }
    return false;
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
    int sum;
    cout << "Enter the sum" << endl;
    cin >> sum;
    int i=0;
    while(i < n-2)
    {
        if (binarySearch(arr, n, sum-arr[i], i + 1))
        {
            cout << "Tripet is present" << endl;
            break;
        }
        i++;
    }
    if(i==n+2)
        cout << "Triplet is not present" << endl;
    return 0;
}
