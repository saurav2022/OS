#include<iostream>
#include<cstring>
using namespace std;

int main(){
	char str[10];
	int l, n1, n2;

	cout << "Enter an expression: ";
	cin >> str;

	l = strlen(str);

	if (l == 3){
		n1 = int(str[0]);
		n2 = int(str[2]);
		if (str[1] == '<')
			cout << (n1 < n2) << endl;
		else if (str[1] == '>')
			cout << (n1 > n2) << endl;
	}
	else if (l == 4){
		n1 = int(str[0]);
		n2 = int(str[3]);
		if (str[1] == '=' && str[2]=='=')
			cout << (n1 == n2) << endl;
		else if (str[1] == '!' && str[2] == '=' )
			cout << (n1 != n2) << endl;
	}

	return 0;

}