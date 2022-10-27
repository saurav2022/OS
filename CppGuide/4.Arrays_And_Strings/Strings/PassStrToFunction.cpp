#include <iostream>
using namespace std;

void display (char *);
void display(string);

int main(){
	string s_str;
	char str[100];

	cout << "Enter a string : " ;
	getline(cin, s_str);

	cout << "Enter another string : ";
	cin.get(str, 100, '\n');

	display(s_str);
	display(str);

	return 0;
}


void display(char s[]){
	cout << "Entered character array is " << s << endl;
}


void display(string s){
	cout << "Entered string is " << s << endl;
}

