#include<iostream>
using namespace std;

int main(){
	int n;
	int s = 0, cntr;
	int numOfStudents = 100;
	/*
	Snake case: num_of_students
	Camel case: numOfStudents
	Pascal case: NumOfStudents
	*/

	cout << "Enter the last number n :";
	cin >> n;

	for(cntr=1; cntr<=n; cntr++){
		s = s + cntr;
		cout << " ==> cntr : " << cntr << " Sum : " << s << endl;
	}

	cout << "Sum of first " << n << " natural numbers is " << s << endl;
	return 0;

}

