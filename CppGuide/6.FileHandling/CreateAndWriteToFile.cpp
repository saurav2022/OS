#include<iostream>
#include<fstream>
using namespace std;


/*
3 classes are there in fstream librray:
	i. ofstream : Creates and write to file.
	ii. ifstream : Read from file
	iii. fstream : Creates, reads and writes to file.
*/

int main(){
	ofstream MyFile("thoughts1.txt");

	MyFile << "The woods are lovely dark and deep ..." << endl;
	MyFile << "But I have promises to keep"<< endl;
	MyFile << "And miles to go before I sleep..." << endl;

	MyFile.close();
}