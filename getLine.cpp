#include<iostream>
#include<string>

using namespace std;

int main()
{
	string fullName, address;

	cout << "Enter your full name: ";
	cin >> fullName;

	cout << "enter your address : ";
	getline(cin,address);

	cout << fullName + "\n" + address;
}
