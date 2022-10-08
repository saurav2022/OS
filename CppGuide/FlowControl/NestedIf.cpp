// >90%
// 	95 - 100 : Outstanding
// 	90-95 : Excellent
// <90%
// 	80 - 90 : very Good
// 	60 - 80 : Good
// 	otherwise : Average

#include<iostream>
using namespace std;

int main(){
	int score = 99;
	string status;

	if (score > 90){
		if (score >= 95)
			status = "Outstanding";
		else
			status = "Excellent";
	}
	else{
		if (score >= 80)
			status = "Very Good";
		else if (score > 60) :
			status = "Good"
		else
			status = "Average"; 
	}
}