#include<iostream>
#include<cstring>
using namespace std;

int main(){
	char my_fav[] = "mango";
	char your_fav[50];

	do{
		cout << "What is yourfavourite fruit? ";
		cin >> your_fav;
		cout << "Result of comparison : " << strcmp(my_fav, your_fav) << endl;
	}while(strcmp(my_fav, your_fav)!=0);

	cout << "Answer is correct! " << endl;
	return 0;
}