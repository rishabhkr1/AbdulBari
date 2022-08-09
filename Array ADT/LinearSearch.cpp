#include <iostream>
using namespace std;
int search(int arr[], int x)
{
	for (int i = 0; i < 10; i++)
  {
		if (arr[i] == x)
			cout<<"Element is present at index :"<<i<<endl;
  }
  return -1;
}
int main()
{
	int arr[] = {2, 3, 4, 10, 40};
  cout<<"Enter element which you want to search :";
	int x;
  cin>>x;
  	int result = search(arr,x);
	
}