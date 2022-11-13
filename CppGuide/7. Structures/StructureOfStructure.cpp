#include<iostream>
using namespace std;

struct Address{
	int houseNo;
	char streetname[40];
	char city[20];
	char zip[7];
};

struct Person{
	char fName[20];
	char lName[20];
	int age;
	float salary;
	char gender;
	Address home;
	Address office;
};

void display(struct Person p){
	cout << p.fName << " " << p.lName << ", " << p.age << ", " << p.salary << ", " << p.gender << endl;
	cout << "Address zipcodes: " ;
	cout << p.home.zip << ", " << p.office.zip << endl;
}

int main(){
	Address residence = {80, "Brumwell Street", "Ontario","M1E2T7"};
	Address office = {37, "Markham Road", "Ontario", "M1R2E5"};
	Person p = {"Saurav", "Ganguly", 30, 1234, 'M', residence, office};
	display(p);
	return 0;
}