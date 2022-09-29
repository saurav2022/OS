#include<iostream>
using namespace std;

int largerNumber(int number1, int number2);

int main(){
	int num=0, max=-9999999;

	do{
		max = largerNumber(max, num);
		cout << " ==> Maximum : " << max << " num: " << num << endl;
		cout << "Enter a number (-1 to stop): " ;
		cin >> num;

	}while(num != -1);

	cout << "Largest number is : " << max << endl;

	return 0;
}

int largerNumber(int number1, int number2){
	if (number1 < number2)
		return number2;
	else
		return number1;
}

