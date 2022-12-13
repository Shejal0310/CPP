#include <iostream>
using namespace std;

int main(){
	int a;
	cout << "Enter 1st Number : " << endl;
	cin >>a;

	if(a>0){
		cout << "A is Positive Number..." << endl;
	}
	else{
		if(a<0){
				cout << "A is Negative Number..." << endl;
			}
		else{
			cout << "A is Zero..." << endl;
		}
	}
	return 0;
}
