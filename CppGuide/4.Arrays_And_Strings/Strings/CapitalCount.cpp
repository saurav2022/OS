#include<iostream>
using namespace std;

int main(){
	string s;
	int l, cap=0;
	char ch;

	cout << "Enter the string: ";
	getline(cin, s);
	
	l = s.length();
	for(int i=0; i<l; i++){
		ch = s.at(i);
		if (ch >=65 && ch<= 90)
			cap++;
	}

	cout << "Total number of capital letters : " << cap << endl;
	return 0;
}