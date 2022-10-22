#include <iostream>
using namespace std;

int main(){
	int n, s = 0;

	cout << "Enter a number : ";
	cin >> n ;

	while (true){
		s += n; 			// s = s + n;

		cout << "Enter a number : ";
		cin >> n ;	

		if (n < 0){
			cout << "Encountered a -ve number, hence exiting..." << endl;
			break;
		}
	}

	cout << "Sum of all entered positive numbers is " << s << endl;
}