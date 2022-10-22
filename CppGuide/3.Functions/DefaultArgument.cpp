#include <iostream>
using namespace std;

void display(char a = '%', int b = 3);

int main(){
	int count = 5;

	cout << "No argument passed : " ;
	display();

	cout << "First argument passed : ";
	display('#');

	cout << "Both arguments passed : ";
	display('$', count);

	return 0;
}

void display(char c, int n){
	for (int i=1; i <= n ; i++){
		cout << c;
	}
	cout << endl;
}