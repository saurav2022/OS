#include <iostream>
using namespace std;

int main(){
	int i = 1;

	while (i>0){
		cout << ++i << " ";

		if (i == 20)
			break;		
	}
}