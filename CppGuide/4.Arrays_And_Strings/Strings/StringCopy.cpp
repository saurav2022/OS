#include<iostream>
#include<cstring>
using namespace std;

int main(){
	char str1[25], str2[25];

	cout << "Enter the string : ";
	cin.getline(str1, 25);

	strcpy(str2, str1);

	cout << "String 1 : " << str1 << endl;
	cout << "String 2 : " << str2 << endl;

	return 0;
}