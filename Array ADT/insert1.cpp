#include<iostream>
using namespace std;
int main(){
    int n;
    int A[n],i,ele,pos,size;
    n=sizeof(A)/sizeof(A[0]);
    cout<<"Enter the size of an array : ";
    cin>>size;
    for(i=0;i<size;i++){
        cout<<"Enter element at index "<<i+1<<" : ";
        cin>>A[i];
    }
    cout<<"Enter the position of element you want to insert : ";
    cin>>pos;
    cout<<"Enter element to insert : ";
    cin>>ele;
    for(i=size;i>=pos;i--)
        A[i]=A[i-1];
        A[i]=ele;
        size++;
        cout<<"New array is : ";
    for(i=0;i<size;i++){
        cout<<A[i]<<" ";
        }
        return 0;
}