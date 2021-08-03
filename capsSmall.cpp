#include<iostream>

using namespace std;

int main()
{
	char a;

	cout << " Enter a Character: ";
	cin >> a;

	if(a >= 65 && a <= 90){
		cout << " Its a Uppercase Letter.";
	}
	else if(a >= 97 && a <= 122){
		cout << " Its a Lower case letter.";
	}else{
		cout << " Enter a Character. ";
	}
}
