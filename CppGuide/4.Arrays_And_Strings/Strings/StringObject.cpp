#include<iostream>
using namespace std;

int main(){
	string str[2];

	for(int i=0; i < 2; i++){
		cout << "Enter a string: ";
		getline(cin, str[i]);
	}
	

	for(int i=0; i < 2; i++){
		cout << str[i] << " ";
	}
	
	return 0;

}