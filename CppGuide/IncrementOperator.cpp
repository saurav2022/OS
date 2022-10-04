#import <iostream>
using namespace std;

int main(){
	int a, b, aa, bb;
	a = 10;
	b = 100;

	aa = a++;
	bb = b--;

	cout << "Final Value of aa :"  << aa << endl;
	cout << "Final Value of bb :"  << bb << endl;
	cout << "Final Value of a :"  << a << endl;
	cout << "Final Value of b :"  << b << endl;

	return 0;

}