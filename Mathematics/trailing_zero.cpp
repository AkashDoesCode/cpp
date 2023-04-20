//two and five together make 1 ten that means 1 zero
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int res=0;
    for(int i=5;i<=n;i=i*5)
    {
        res=res+n/i;
    }
    cout<<res<<endl;
    return 0;

}
