#include <iostream>
using namespace std;

void test();

int main(){
	int var = 5;

	test();

	var = 9; 
	// var1 = 9 -- Illegal as there is no local variable called var1 
}

void test(){
	int var1;
	var1 = 6;

	cout << var1;
	// cout << var; -- Illegal as there is no local variable called var
}