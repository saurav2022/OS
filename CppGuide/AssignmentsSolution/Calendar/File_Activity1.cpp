#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
	char letter;
	ifstream myfile ("examplefile.txt");
	if(myfile.is_open()){
		while( myfile >> letter ){
		//while( myfile.get(letter)){
			cout << letter ;
		}
		myfile.close();
	}
	else{
		cout << "Unable to open file." << endl;
	}
	return 0;
}