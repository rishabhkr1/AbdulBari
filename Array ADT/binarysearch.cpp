    //1st Method

// #include<iostream>
// using namespace std;
// int binary(int A[],int l,int h,int key)
// {
//     int mid=(l+h)/2;
//     if(key==A[mid]){
//     return mid;
//     }
//     if(key<=A[mid])
//     {
//        return binary(A,l,mid-1,key);
//     }
//     else if(key>=A[mid])
//     {
//         return binary(A,mid+1,h,key);
//     }
//     return -1;
// }
// int main()
// {
//     int A[] = {2,4,6,8,10,12,14,16};
//     int key,l=0,h=sizeof(A)/sizeof(A[0])-1;
//     cout<<"Enter element you want to search : ";
//     cin>>key;
//     cout<<binary(A,l,h,key);
//     return 0;
// }

    //2nd Method

#include<iostream>
using namespace std;
int binary(int A[],int l,int h,int key)
{
while(l<=h){
    int mid=(l+h)/2;
    if(key==A[mid])
    {
        return mid;
    }
    else if(key>=A[mid])
    {
        l=mid+1;
    }
    else
    {
        h=mid-1;
    }
}
return -1;
}
int main(){
    int A[]={2,4,6,8,10,12,14,16};
    int key,l=0,h=sizeof(A)/sizeof(A[0])-1;
    cout<<"Enter element you want to search : ";
    cin>>key;
    cout<<binary(A,l,h,key);
    return 0;
}