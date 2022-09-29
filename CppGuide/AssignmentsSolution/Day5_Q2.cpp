#include<iostream>
using namespace std;
void isLessThan20(int number);
void isOdd(int number);

int main(){
	int num;

	cout << "Enter a number: ";
	cin >> num;

	isOdd(num);

	return 0;
}

void isOdd(int number){
	if (number % 2 != 0){
		cout << number << " is Odd" << endl;
	}
	isLessThan20(number);
}

void isLessThan20(int number){
	if (number < 20){
		cout << number << " is less than 20" << endl;
	}
}