#include<iostream>
using namespace std;

string positiveNegative(int number);

int main(){
	int num;
	string pos_neg;
	
	cout << "Enter a number:";
	cin >> num;

	pos_neg = positiveNegative(num);

	cout << "The number you entered is " << pos_neg << endl;

	return 0;
}

string positiveNegative(int number){
	if (number > 0)
		return "Positive";
	else if (number < 0)
		return "Negative";
	else
		return "Zero";
}