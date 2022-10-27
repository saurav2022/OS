#include<iostream>
#include<cstring>
using namespace std;

int main(){
	char str[50];

	cout << "Enter the string : ";
	cin.getline(str, 25);

	cout << "String  : " << str  << " Length : " << strlen(str)<< endl;

	return 0;
}