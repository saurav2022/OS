#include<iostream>
using namespace std;

int main(){
	int num=0, sum = 0;

	do{
		sum = sum + num;
		cout << "Enter a number (-1 to stop): " ;
		cin >> num;

	}while(num != -1);

	cout << "Sum of numbers entered : " << sum << endl;

	return 0;
}

