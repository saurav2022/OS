#include<iostream>
using namespace std;

int main(){
	// Initializing an array without specifying size.
	double numbers[]={7, 5, 6, 12, 18};
	double sum=0, avg, count=0;

	// Printing the array elements.
	cout << "The numbers are : " ;
	for(int i = 0; i < 5; i++){
		cout << numbers[i] << " ";
		sum = sum + numbers[i];
		count++;
	}

	cout << endl;
	avg = sum / count;
	cout << "Sum is " << sum << endl;
	cout << "Average is " << avg << endl;


	return 0;
}