#include<iostream>
using namespace std;

int divisibleCount(int number, int divisor);

int main(){
	int num, div, n;

	cout << "Enter a number: ";
	cin >> num;
	cout << "Enter a divisor: ";
	cin >> div;

	n = divisibleCount(num, div);

	cout << num << " can be completely divisible by " << div << ", " << n << " times" << endl;
	return 0; 
}

int divisibleCount(int number, int divisor){
	int cntr = 0;
	while(divisor < number){
		cntr = cntr + 1;
		number = number - divisor;
	}
	return cntr;
}




