#include<iostream>
using namespace std;

int main(){
	int a = 1, b = 6;
	// If a < 10 & b > 5, then print 'Yes' else 'No'
	if (! (a < 10) && b > 5){
		cout << "Yes" << endl;
		cout << (a & b) << endl;
	}
	else{
		cout << "No" << endl;
		cout << (a | b) << endl;

	}
	return 0;
}