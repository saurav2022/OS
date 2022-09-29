#include <iostream>
using namespace std;

int main(){
	char c;

	cout << "Enter a letter: ";
	cin >> c;

	/*
	if(c == 'a' || c == 'e' || c == 'i' || c == 'o'\
	 || c == 'u' ||  c == 'A' || c == 'E' || c == 'I' \
	 || c == 'O' || c == 'U'){
		cout << "The letter is a vowel.";
	}
	*/

	switch (c) {
		  case 'a':
		  case 'A':
		  case 'e':
		  case 'E':
		  case 'i':
		  case 'I':
		  case 'o':
		  case 'O':
		    cout << "The letter is a vowel";
		    break;
		  default:
		    cout << "The letter is a consonant";
	}

	return 0;

}