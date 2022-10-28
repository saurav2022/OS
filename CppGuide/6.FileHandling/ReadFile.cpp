#include<iostream>
#include<fstream>
using namespace std;

int main(){
	ifstream MyFile("numbers.txt");
	string s;

	if(MyFile.is_open()){
		while (getline(MyFile, s)){
			cout << s << endl;
		}
		MyFile.close();
	}
	else{
		cout << "Unable to open file" << endl;
	}
}