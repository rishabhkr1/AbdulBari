#include <iostream>
using namespace std;

class Delete
{
private:
    int *A;
    int size;
    int length;

public:
    Delete(int a)
    {
        size = 10;
        size = a;
        A = new int[size];
        length = 0;
    }
    void display()
    {
        for (int i = 0; i < length; i++)
        {
            cout << A[i];
        }
    }
    void input(int num, int i)
    {
        A[i] = num;
        length++;
    }

    void Del(int index);
};

void Delete::Del(int index)
{
    if (index >= 0 && index < length)
    {
        for (int i = index; i < length; i++)
        {
            A[index] = A[index + 1];
        }
        length--;
    }
}

int main()
{
    Delete dele(5);
    int index;

    int a[5];
    cout<<"Enter the Value of array : ";
    for (int i = 0; i < 5; i++)
    {
        
        cin>>a[i];
        dele.input(a[i], i);
    }

    cout<<"Enter the index you want to delete";
    cin>>index;

    dele.Del(index);
    dele.display();
}