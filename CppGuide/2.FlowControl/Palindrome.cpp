#import<iostream>
using namespace std;

int main(){
	int a = 12321,a_copy, d, s = 0;
	a_copy = a;

	while(a > 0){
		d = a % 10;    // 1
		s = s * 10 + d;  // 321
		a = a / 10;		 // 0
	}

	if (s == a_copy){
		cout << "Palindrome" << endl;
	}
	else
		cout << "Not a Palindrome" << endl;
	return 0;
}