#include<iostream>
#include<fstream>
using namespace std;


int main(){
	ofstream MyFile("numbers.txt");

	int num;

	for(int i = 0 ; i < 5 ; i++){
		cout << "Enter a number : ";
		cin >> num;
		MyFile << num << endl;
	}
	
	

	MyFile.close();
}