#include <iostream>
using namespace std;
 
class Array{
 
private:
    int* A;
    int size;
    int length;
 
public:
    Array(int sz){
        sz = size;
        A = new int [size];
    }
 
    void create(){
        cout << "Enter number of elements: "<<endl;
        cin >> length;
        cout << "Enter the array elements: "<<endl;
        for (int i=0;i<length; i++){
            cout << "Array element: " << i << " = "<<endl;
            cin >> A[i];
        }
    }
 
    void display(){
        for (int i=0;i<length;i++){
            cout<<A[i]<<" ";
        }
    }
 
    ~Array(){
        delete []A;
        cout<<"Array destroyed"<<endl;
    }
};

int main() {
 
    Array arr(10);
    arr.create();
    arr.display();

    return 0;
}