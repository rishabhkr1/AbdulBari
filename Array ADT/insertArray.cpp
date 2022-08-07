#include <iostream>
using namespace std;

class Insert
{
private:
    int *A;
    int size;
    int length;

public:
    Insert(int a)
    {
        size = 10;
        a=size;
        length = 0;
        A = new int(size);
    }

    void InsertValue(int index, int value);
    void Display();
};

void Insert::InsertValue(int index, int value)
{

    if (index>=0 && index<=length)
    {
        for (int i=length-1; i>=index; i--)
        {
            A[i + 1]=A[i];
        }
        A[index] = value;
        length++;
    }
}

void Insert::Display()
{
    for (int i = 0; i < length; i++)
    {
        cout << A[i] << ",";
    }
}

int main()
{
    Insert ins(10);

    ins.InsertValue(0, 5);
    ins.InsertValue(1, 4);
    ins.InsertValue(4, 3);
    ins.InsertValue(3, 7);
    ins.InsertValue(2, 1);

    ins.Display();
}