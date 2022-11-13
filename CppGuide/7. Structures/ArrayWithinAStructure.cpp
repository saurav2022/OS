#include<iostream>
using namespace std;

struct candidate{
	int roll_no;
	char grade;
	float marks[4];
};

void display(struct candidate s){
	cout << "Roll : " << s.roll_no << " Gade : " << s.grade << endl;
	for (int i=0; i < sizeof(s.marks)/sizeof(float); i++){
		cout << "Subject " << i+1 << " : " << s.marks[i] << endl;
	}

}

int main(){
	struct candidate Sam = {1, 'A', {98.5, 79, 89, 94}};
	display(Sam);

	return 0;
}