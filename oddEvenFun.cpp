#include<iostream>

using namespace std;

string oddEven(int a);

int main()
{
	int a;

	cout << " Enter number: ";
	cin >> a;

	cout << endl << oddEven(a) << "\n";
}

string oddEven(int a)
{
	if(a % 2 == 0)
	{
		return "even";
	}
	else
	{
		return "odd";
	}
}
