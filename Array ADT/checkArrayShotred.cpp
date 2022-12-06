#include<iostream>
using namespace std;

int isShorted(int arr[],int n)
{
    for(int i=0;i<n;i++){
        if(arr[i]>arr[i+1])
        return 0;
    }
    return 1;
}
int main()
{
    int arr[]={2,3,4,5,7,8,9};
    if(isShorted(arr,sizeof(arr)/sizeof(arr[0])))
        cout<<"Yes";
    else
    cout<<"No";
}