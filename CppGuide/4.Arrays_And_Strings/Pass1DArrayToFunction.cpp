#include<iostream>
using namespace std;

void display(int marks[5]);

int main(){
	// Array Initialization
	int numbers[5] = {88,99, 95, 87, 90};

	// Function call. Actual argument : numbers
	display(numbers);

	return 0;
}

void display(int marks[5]){
	cout << "Displaying marks : " << endl;
	for(int i = 0; i < 5; i++){
		cout << marks[i] << " ";
	}
}