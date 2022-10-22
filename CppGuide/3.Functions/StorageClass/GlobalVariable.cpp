#include<iostream>
using namespace std;

int c = 12;

void test();

int main(){
	cout << "Printing from main : " << c << endl;
	test();
	cout << "Printing from main : " << c << endl;

	return 0;
}

void test(){
	++c;

	cout << "Within the test method : " << c << endl;
}