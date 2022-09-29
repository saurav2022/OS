#include<iostream>
using namespace std;

int main(){
	int num=0, num_copy, rem, sum = 0;

	cout << "Enter a number: ";
	cin >> num;

	num_copy = num;
	while (num > 0){
		rem = num % 10;
		sum = sum + rem;
		/* Reverse a number :  sum = (sum * 10) + rem */
		num = num / 10;
	}

	cout << "Sum of digits of " << num_copy << ": " << sum << endl;

	return 0;
}

/*
546
n = 5 
n%10 ---> 645
n/10 ---> 54, 5, 0

Palindrome : 14641, MADAM    sum == num_copy?
*/