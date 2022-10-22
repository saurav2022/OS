// 0 - 50 Units : $2/unit
// 51 - 100 Units : $4/unit
// 101 - 250 Units : $7/unit
// >250 Units : $12/unit

#include<iostream>
using namespace std;

int main(){
	int units_consumed = 60, bill_amt;

	if (units_consumed < 50)
		bill_amt = units_consumed * 2;
	else if (units_consumed < 100)
		bill_amt = 100 + (units_consumed - 50) * 4;
	else if (units_consumed < 250)
		bill_amt = 300 + (units_consumed - 100) * 7;
	else
		bill_amt = 1350 + (units_consumed - 250) * 12;


	cout << "Total bill for consumption of " << units_consumed << " units is $" << bill_amt <<endl;
}
