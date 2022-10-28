#include<iostream>
#include<fstream>
using namespace std;


int main(){
	ofstream MyFile("thoughts1.txt", ios::app);

	MyFile << "Written by Robert Frost" << endl;

	MyFile.close();
}