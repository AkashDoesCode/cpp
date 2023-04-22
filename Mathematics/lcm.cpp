#include <bits/stdc++.h>
using namespace std;

int gcd(int a,int b)
{
    if(b%a==0)
        return a;
    else
        return gcd(b%a,a);
}
int main()
{
    int a,b;
    cout<<"enter two no"<<endl;
    cin>>a>>b;
    int lcm=(a*b)/gcd(a,b);
    cout<<"LCM : "<<lcm<<endl;
    return 0;
    
}