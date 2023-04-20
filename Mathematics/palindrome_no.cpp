#include <bits/stdc++.h>
using namespace std;

int main()
{
    int number;
    cout<<"enter"<<endl;
    cin>>number;
    int a=number;
    int rev=0;
    while(a>0)
    {
        rev=rev*10+a%10;
        a/=10;
    }
    cout<<((number==rev)?"yes":"no")<<endl;
    return 0;

}