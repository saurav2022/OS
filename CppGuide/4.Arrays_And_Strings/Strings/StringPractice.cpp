#include<iostream>
using namespace std;

int main(){
	string str1("Britain has got a new PM");

	string str2(str1); // String copy

	string str3(40, '*'); // String Multiplication

	string str4(str1,18,6); // Substring

	string str5(str2.begin(), str2.begin() + 5);

	str4.clear();
	char ch_3 =  str1[3];
	char ch_2 = str1.at(2);
	char ch_0 = str1.front();

	int l = str1.length();

	str1.append(" Rishi Sunak");

	int a_1 = str1.find('a');
	int a_2 = str1.find('a',a_1 + 1);
	int a_3 = str1.find('a',a_2 + 1);

	int find_str = str1.find("new");

	string str1_ss = str1.substr(8);

	str1.replace(12,3," been adorned by");

	string a("Saurav");
	string b("Saurav");

	int r = a.compare(b);

	const char* charstr = a.c_str();

	string str100("Rishi");

	if(str1.find(str100) != string::npos)
		cout << str1.find(str100) << endl;
	else
		cout << "Substring not found in string" << endl;








	cout << str1.find(str100) << " " << string::npos;


}