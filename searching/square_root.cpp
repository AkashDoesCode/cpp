#include <bits/stdc++.h>
using namespace std;

int squareRoot(int ele)
{
    int left = 1;
    int right = ele;
    int ans = -1;
    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (mid * mid == ele)
            return mid;
        else if (mid * mid > ele)
            right = mid - 1;
        else
        {
            ans = mid;
            left = mid + 1;
        }
    }
    return ans;
}

int main()
{
    int ele;
    cout << "Enter the element to be searched" << endl;
    cin >> ele;
    cout << "Square root of " << ele << " is " << squareRoot(ele);
    return 0;
}
