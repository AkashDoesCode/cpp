#include <bits/stdc++.h>
using namespace std;

bool twoSum(int arr[], int n, int sum)
{
    int left = 0;
    int right = n - 1;
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
    cout << "Sum is " << (twoSum(arr, n, sum)?"present":"not present");
    return 0;
}
