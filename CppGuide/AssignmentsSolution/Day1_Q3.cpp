#include<iostream>
#include<string>
using namespace std;

void print(string s, int linelength){
	int spaces = 0;
	spaces = (linelength - s.size())/2;
	if (spaces > 0){
		cout << string(spaces, ' ');
	}
	cout << s << endl;
}

int main(){
	const int LINELENGTH = 48;
	string header(LINELENGTH, '*');

	cout << header << endl;
	print("Welcome to C++", LINELENGTH);
	print("I am very excited to learn it!", LINELENGTH);
	cout << header << endl;
	return 0;

}