#include <iostream>
using namespace std;

int add(int* a, int len)
{
	int sum = 0;
	for(int i = 0; i < len; i++)
	{
		sum += a[i];
	}

	return sum;
}

int add(int a, int b)
{
	int arr[2];
	
	arr[0] = a;
	arr[1] = b;

	return add(arr, 2);
}

int main()
{
	cout<<add(1, 2)<<endl;
}
