#include<iostream>
using namespace std;

void display(int marks[][5]);

int main(){
	// Array Initialization
	int numbers[2][5] = {
			{88,99, 95, 87, 90},
			{818,199, 395, 487, 590},
		};

	// Function call. Actual argument : numbers
	display(numbers);

	return 0;
}

// Passing the number of rows is not mandatory.
void display(int marks[][5]){
	cout << "Displaying marks : " << endl;
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 5; j++){
			cout << marks[i][j] << " ";	
		}
		cout << endl;		
	}
}