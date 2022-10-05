#include<iostream>
#include<string>
using namespace std;


void PrintMonthName(int month);
bool IsLeapYear(int year);
int DaysInMonth(int month, int year);
int FirstDayOfMonth(int month, int year);
void PrintMonth(int month, int year);
void PrintYear(int year);

int main(){
	int month, year;
	string choice;

	cout << "Do you want an year or month calendar? (Just enter 'year' or 'month' in lowercase): " << endl;
	cin >> choice;

	if (choice == "year"){
		cout << "Enter the year: ";
		cin >> year;
		PrintYear(year);
	}
	else if (choice == "month"){
		cout << "Enter the month(1-12) and year(yyyy) separated by space or newline: ";
		cin >> month >> year ;
		PrintMonth(month, year);
	}
	else{
		cout << "Did not understand your requirement! Invalid entry. " << endl;
	}

	return 0;
}

void PrintMonthName(int month){
	string months[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

	cout << (months[month-1]);
}

bool IsLeapYear(int year){
	if ((year % 400 == 0 && year % 100 == 0) || (year % 4 == 0 && year % 100 != 0))
			return true;
		else
			return false;
}

int DaysInMonth(int month, int year){
	int month_index = month - 1;
	if (month_index == 0) 
		return  31;

	else if (month_index == 1){
		if (IsLeapYear(year))
			return 29;
		else
			return 28;
	}

	else if (month_index == 2) return 31;
	else if (month_index ==3) return 30;
	else if (month_index == 4) return 31;
	else if (month_index == 5) return 30;
	else if (month_index == 6) return 31;
	else if (month_index == 7) return 31;
	else if (month_index == 8) return 30;
	else if (month_index == 9) return 31;
	else if (month_index == 10) return 30;
	else if (month_index == 11) return 31;
	else return -1;
}


int FirstDayOfMonth(int month, int year){
	int day = 1;
	static int t[] = {0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4};

	year -= month < 3;
	return (year + year/4 - year/100 + year/400 + t[month-1] + day)%7;
}

void PrintMonth(int month, int year){
	int num_of_days = DaysInMonth(month, year);
	int first = FirstDayOfMonth(month, year);
	int i;

	string header(7, '*');
	cout << header;
	PrintMonthName(month);
	cout << ", " << year << header << endl;

	cout << "Sun Mon Tue Wed Thu Fri Sat" << endl;

	for(i=0; i<first; i++){
		cout << "    ";
	}

	for(i=1;i<=num_of_days;i++){
		printf("%-4d", i);
		if((first + i ) % 7 == 0)
			cout << endl;
	}

	cout << endl;
	cout << endl;
}


void PrintYear(int year){
	string header(12, '*');
	cout << header << year << header << endl;

	for(int month=1;month <= 12; month++){
		PrintMonth(month, year);
	}
}













