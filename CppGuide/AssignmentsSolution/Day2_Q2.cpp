#include <iostream>
using namespace std;

int main(){
	int num1, num2;
	int sum, diff, prod, quotient, rmndr;
	
	cout << "Enter number 1: ";
	cin >> num1;
	cout << "Enter number 2: ";
	cin >> num2;

	sum = num1 + num2;
	diff = num1 - num2;
	prod = num1 * num2;
	quotient = num1 / num2;
	rmndr = num1 % num2;

	cout << "You entered " << num1 << " and " << num2 << endl;
	cout << "Below are the calculations for these numbers" << endl;
	cout << num1 << " + " << num2 << " = " << sum << endl;
	cout << num1 << " - " << num2 << " = " << diff << endl;
	cout << num1 << " * " << num2 << " = " << prod << endl;
	cout << num1 << " / " << num2 << " = " << quotient << endl;
	cout << num1 << " % " << num2 << " = " << rmndr << endl;


}