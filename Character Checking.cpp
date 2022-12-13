#include <iostream>
using namespace std;

int main(){
	char ch;
	cout << "Enter the Character..."<< endl;
	cin >> ch;

	if(ch >='A' && ch <='Z'){
		cout << "The Character is in Uppercase..."<< endl;
	}
	else if(ch >='a' && ch <='z'){
		cout << "The Character is in lowercase..."<< endl;
	}
	else{
		cout << "The Character is Number..."<< endl;
	}
}
