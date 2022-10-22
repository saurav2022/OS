#include <iostream>
#include <cmath>
using namespace std;

int prime();

int main(){
	int status;

	status = prime();

	if (status == 1){
		cout << "prime number. " << endl;
	}
	else{
		cout << "composite number " << endl;	
	}

	return 0;
}

int prime(){
	int n = 12, i, flag = 1;

	for(i=2; i < sqrt(n); i++){
		// cout << " Checking divisibility by " <<i << endl;
		if (n % i == 0){
			flag = 0;
			break;
		}
	}

	return flag;

}