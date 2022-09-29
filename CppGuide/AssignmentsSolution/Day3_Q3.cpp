#include <iostream>
using namespace std;

int main(){
	char ch;
	
	cout << "Enter a letter: ";
	cin >> ch;
	
	if ((ch >= 65 && ch <= 90) || \
	   (ch >= 97 && ch <= 122) || \
	   (ch >= 48 && ch <= 57)){
	   	cout << "" << endl;
	   }
	 else{
	 	cout << ch << " is a special character." << endl;
	 }

	

	return 0;

}