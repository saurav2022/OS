#include<iostream>
#include<fstream>
#include<string>
#include<sstream>
using namespace std;

void UpperLowerDigit(string str);
bool isNumber(char ch);

int main(){
	std::ifstream myfile;
	myfile.open("examplefile.txt");

	std::stringstream strStream;
	strStream << myfile.rdbuf();

	std::string str = strStream.str();

	std::cout << str << "\n";

	UpperLowerDigit(str);

	return 0;
}

bool isNumber(char ch){
	if(ch >= '0' && ch <= '9')
		return true;
	else
		return false;
}



void UpperLowerDigit(string str){
	int upperCase = 0, lowerCase = 0, number = 0, special = 0;

	for(int i=0; i < str.length(); i++){
		if(str[i] >= 'A' && str[i] <= 'Z')
			upperCase++;
		else if(str[i] >= 'a' && str[i] <= 'z')
			lowerCase++;
		else if(isNumber(str[i]))
			number++;
		else
			special++;
	}

	cout << "Number of digits : " << number << endl;
	cout << "Number of uppercase letters : " << upperCase << endl;
	cout << "Number of lowercase letters : " << lowerCase << endl;
}
