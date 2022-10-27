#include<iostream>
#include<cstring>
using namespace std;

int main(){
	char str1[25], str2[25];

	cout << "Enter the first string : ";
	cin.getline(str1, 25);

	cout << "Enter the second string : ";
	cin.getline(str2, 25);

	strcat(str1, str2); // str1 is the destination

	cout << "String 1 : " << str1 << endl;
	cout << "String 2 : " << str2 << endl;

	return 0;
}