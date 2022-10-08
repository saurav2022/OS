// 15 * 4 = 60
// 15 + 15 + 15 + 15 = 60

#import<iostream>
using namespace std;

int main(){
	int a = 15, b = 4, s = 0;

	for(int i=1; i <= b; i++){
		s = s + a;
	}

	cout << a << " * " << b << " = " << s << endl;
	return 0;
}