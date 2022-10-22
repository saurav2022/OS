#include<iostream>
using namespace std;

// num1 and num2 are Formal Arguments.
void displayNum(int num1, float num2){
	cout << "printing the integer : " << num1 << endl;
	cout << "printing the float : " << num2 << endl;
}

int main(){

	int n1 = 10;
	double n2 = 25.78;

	//Actual Arguments: n1 and n2
	displayNum(n1, n2);

	return 0;
}