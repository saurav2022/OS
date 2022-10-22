#include<iostream>
using namespace std;

void display(int var1, double var2){
	cout << "Integer : " << var1 ;
	cout << " & Double : " << var2 << endl;
}

void display(double var){
	cout << "Double : " << var << endl;	
}

void display(int var){
	cout << "Integer : " << var << endl;	
}

int main(){
	int a = 5;
	double b = 2.3;

	display(a);
	display(a, b);
	display(b);

	return 0;
}