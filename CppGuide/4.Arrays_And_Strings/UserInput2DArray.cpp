#include<iostream>
using namespace std;

int main(){
	int rows = 3, cols = 2;
	int test[rows][cols];

	cout << "Enter 6 integers : " << endl;

	// Accepting inputs from the user
	for(int i = 0; i < rows; i++){
		for(int j = 0; j < cols; j++){
			cin >> test[i][j];
		}
	}

	// Printing the 2D array.
	cout << "Thanks! The numbers entered by you are: " << endl;

	for(int i = 0; i < rows; i++){
		for(int j = 0; j < cols; j++){
			cout << "test[" << i << "][" << j << "] = " << test[i][j] << " , ";
		}
		cout << endl;
	}


	return 0;
}