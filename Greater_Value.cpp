#include <iostream>
using namespace std;

int main(){
	int a, b;
	cout << "Enter 1st Number : " << endl;
	cin >> a;
	cout << "Enter 2nd Number : " << endl;
	cin >> b;

	if(a>b){
		cout << "A is greater..." << endl;
	}
	else{
		cout << "B is greater..." << endl;
	}
	return 0;
}
