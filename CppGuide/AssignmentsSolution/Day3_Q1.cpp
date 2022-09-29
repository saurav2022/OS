#include <iostream>
using namespace std;

int main(){
	float num;
	
	cout << "Enter a number: ";
	cin >> num;

	if(num < 0){
		cout << "You entered a negative number";
	}
	else if (num > 0){
		cout << "You entered a positive number";
	}
	else{
		cout << "You entered zero";
	}

	return 0;

}