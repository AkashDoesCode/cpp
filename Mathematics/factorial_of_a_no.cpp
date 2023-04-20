#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int fact=1;
    while(n>0)
    {
        fact*=n;
        n--;
    }
    cout<<"Factorial : "<<fact<<endl;
    return 0;
}