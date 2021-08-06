#include<iostream>

using namespace std;

int main()
{
	int a, sum;

	do{
		sum = sum + a;
		a++;
	}
	while(a<=10);

	cout << "sum = " << sum;
}
