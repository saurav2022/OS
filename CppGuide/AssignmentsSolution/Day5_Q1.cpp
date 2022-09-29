#include<iostream>
using namespace std;
void displayInfo(string firstName, string lastName, int age);

int main(){
	string fname, lname;
	int age;

	cout << "Enter first name : ";
	cin >> fname;
	cout << "Enter last name : ";
	cin >> lname;
	cout << "Enter Age : ";
	cin >> age;

	displayInfo(fname, lname, age);
	return 0;
}

void displayInfo(string firstName, string lastName, int age){
	cout << firstName << " " << lastName << " is " << age << " years old" << endl;
}