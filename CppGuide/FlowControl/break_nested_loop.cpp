// Q.1) Write nested for loop to print multiplication tables from 1 to 10.
#include <iostream>
using namespace std;

int main(){
	int n, s = 0;

	// cout << "Enter a number : ";
	// cin >> n ;

	for(int i=1; i <= 3; i++){
		for (int j=1; j<=10; j++){
			if (j==6){
				break;
			}
			cout << i << " * " << j << " = " << i * j << endl;
		}
		cout << endl;
	}
}