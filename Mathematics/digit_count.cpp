#include <bits/stdc++.h>
using namespace std;

int main()
{
    int digit;
    cout<<"enter digit"<<endl;
    cin>>digit;
    int res=0;
    while(digit>0)
    {
        digit=digit/10;
        res++;
    }
    cout<<"No of digits is"<<res<<endl;
    return 0;
}