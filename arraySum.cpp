#include<iostream>

using namespace std;

int main()
{
	int i,sum,  array[5]={0};

	for(i=0;i<=5;i++)
	{
		cout << "enter Number " << i << ":";
		cin >> array[i];
	}

	for(i=0;i<=5;i++)
	{
		sum = sum + array[i];
	}
	cout<< "Sum: " << sum;
}
