#include <iostream>
using namespace std;

struct student{
	int roll_no;
	char grade;
	float marks;
};

void display(struct student s[3]){
	int i;
	for(i=0; i<3; i++){
		cout << "Roll : " << s[i].roll_no << " Grade : " << s[i].grade << " Marks : " << s[i].marks<< endl;	
	}
}

int main(){
	student s[3] = {
		{1, 'A', 245},
		{2, 'C', 111},
		{3, 'A', 278}
	};
	display(s);

	return 0;
}