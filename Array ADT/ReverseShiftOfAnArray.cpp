#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the size of Array :";
    int length,temp,i,j;
    cin>>length;
    int A[length];
    for(int i=0;i<length;i++){
        cout<<"Enter array at index "<<i+1<<" :";
        cin>>A[i];
    }
    for(int i=0,j=length-1;i<j;i++,j--){
        temp=A[i];
        A[i]=A[j];
        A[j]=temp;
    }

    cout<<"Elements after reversing : ";
    for(int i=0;i<length;i++){
        
        cout<<A[i]<<" ";
    }
    return 0;
}