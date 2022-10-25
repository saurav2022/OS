#include<iostream>
using namespace std;

int main(){
	int marks[5] = {19, 10, 8, 17, 9};

	// Update the 4th element to 99
	marks[3] = 99;

	// Take input from user and replace 3rd element.
	cin >> marks[2];

	// Method 1 to print all elements
	for(int i = 0; i < 5; i++){
		cout << marks[i] << " ";
	}

	cout << endl;

	// Method 2 to print all elements
	// This is more memory efficient as we access the elements via address.
	for(const int &n : marks){
		cout << n << " ";
	}


	return 0;
}