#include<iostream>
#include<string>

using namespace std;

int main()
{
	string str1, str2;

	cout << "enter string 1:";
	cin >> str1;

	cout << "enter string 2:";
	cin >> str2;

	if(str1.length() == str2.length())
	{
		cout << " Both string length are equal.";
	}
	else{
		cout << " Both string length are not Equal.";
	}
}
