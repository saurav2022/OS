#include<iostream>
using namespace std;

int main(){
	int num, i;

	cout << "Enter a number : ";
	cin >> num;

	for(i=0; i<=10; i++){
		cout << num << " * " << i << " = " << num * i << endl;
	}

	return 0;
}