#include<iostream>
using namespace std;

float absolute(float var){
	cout << "I am the absolute function for float" << endl;
	if (var < 0.0){
		var = -var;
	}
	return var;
}

int absolute(int var){
	cout << "I am the absolute function for int" << endl;
	if (var < 0.0){
		var = -var;
	}
	return var;
}

int main(){
	int n = -5, n_abs;
	float p = -2.8, p_abs;

	n_abs = absolute(n);
	p_abs = absolute(p);

	cout << "Absolute value of -5 is " << n_abs << endl;
	cout << "Absolute value of -2.8 is " << p_abs << endl;
}