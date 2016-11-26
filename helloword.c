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



int sub(int a, int b)
{
	return a - b;
}

int main()
{
	cout<<add(1, 2)<<endl;
	cout<<sub(3,2)<<endl;
	cout<<"hello world!";
}
