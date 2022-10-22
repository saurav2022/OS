#include<iostream>
using namespace std;

int main(){
	char c = 'a';
	bool isVowel;

	if(c == 'a' || c == 'A' ||c == 'e' || c == 'E' ||c == 'i' || c == 'I' ||c == 'o' || c == 'O' ||c == 'u' || c == 'U'  ){
		isVowel = true;
	}
	else{
		isVowel = false;
	}

	if (isVowel)
		cout << "Yes its a vowel";
	else
		cout << "It is a consonant";

	return 0;
}