#include<iostream>
using namespace std;

int main(){
	int marks[5];

	cout << "Enter 5 integers : " << endl;

	for(int i=0; i < 5 ; i++){
		cin >> marks[i];
	}

	cout << "Thanks! The numbers entered by you are: " << endl;

	for(const int &n : marks){
		cout << n << " ";
	}

	return 0;
}