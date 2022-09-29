#include<iostream>
using namespace std;

void factorial(int number);

int main(){
	int num;
	cout << "Enter a number:";
	cin >> num;

	factorial(num);
	
	return 0;
}

void factorial(int number){
	int i, fact = 1;
	for (i = number; i > 0; i--){
		fact = fact * i;
	}
	cout << "Factorial of " << number << " is " << fact << endl;
}