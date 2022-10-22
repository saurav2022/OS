#include <iostream>
#include <cmath>
using namespace std;

void prime();

int main(){
	prime();

	return 0;
}

void prime(){
	int n = 1009, i, flag = 1;

	for(i=2; i < sqrt(n); i++){
		cout << " Checking divisibility by " <<i << endl;
		if (n % i == 0){
			flag = 0;
			break;
		}
	}

	if (flag == 1){
		cout << n << " is a prime number. " << endl;
	}
	else{
		cout << n << " is a composite number as it is divisible by " << i << endl;	
	}

}