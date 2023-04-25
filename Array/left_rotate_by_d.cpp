#include <bits/stdc++.h>
using namespace std;


//naive method
// void leftRotate(int arr[],int n,int d)
// {
//     int temp[d];
//     for (int i = 0; i < d; i++)
//     {
//         temp[i]=arr[i];
//     }
//     for (int i = d; i < n; i++)
//     {
//         arr[i-d]=arr[i];
//     }
//     for (int i = 0; i < d; i++)
//     {
//         arr[n-d+i]=temp[i];
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     return ;   
// }
void reverse(int arr[],int i, int j)
{
    while(i<j)
    {
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
}


void leftRotate(int arr[],int n,int d)
{
    reverse(arr,0,d-1);
    reverse(arr,d,n-1);
    reverse(arr,0,n-1);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}


int main(){
    int n;
    cout<<"Enter array size"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter array elements"<<endl;
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int d;
    cout<<"Rotate by : "<<endl;
    cin>>d;
    leftRotate(arr,n,d);
    return 0;

}