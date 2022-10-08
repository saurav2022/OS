#import <iostream>
using namespace std;

int main(){
	int a, b, c, d, e;
	a = 3;
	b = 5;

	c = (a == b);
	d = (b > a);
	e = (a <= b);

	cout << "Value of c :"  << c << endl;
	cout << "Value of d :"  << d << endl;
	cout << "Value of e :"  << e << endl;

	return 0;

}