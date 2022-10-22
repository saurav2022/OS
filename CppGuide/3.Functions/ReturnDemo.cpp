#include <iostream>
using namespace std;

int add(int, int);
void printNum(int);


int main(){
	int a = 1, b = 2, sum;

	sum = add(1, 2);
	printNum(sum);

	return 0;
}

int add(int a, int b){
	return (a + b);
}

void printNum(int num){
	cout << "printing the number " << num << endl;
}