#include <iostream>
using namespace std;

int main(){
	float num, avg, sum = 0.0;
	int i, n;

	cout << "Maximum number of inputs:";
	cin >> n;

	for(i=1; i<=n; i++){
		cout << "Enter the number " << i << ":";
		cin >> num;

		if(num < 0.0){
			goto jump;
		}
		sum += num;
	}

jump:
	avg = sum / (i - 1);
	cout << "Average = " << avg << endl;

	return 0;

}