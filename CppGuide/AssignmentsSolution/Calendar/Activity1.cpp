#import<iostream>
using namespace std;
int month_index_of_year(string month);
int index_of_first_day(string first_day);

int main(){
	int i, num_of_days, year;
	int first;
	string month, first_day;
	int days_in_months[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; 

	cout << "Enter month(in string) and year(in int) separated by space/newline:";
	cin >> month >> year;
	cout << "Enter first day in the month(in string): ";
	cin >> first_day;

	num_of_days = days_in_months[month_index_of_year(month)];
	first = index_of_first_day(first_day);

	cout << "\n\n" << month << ", " << year << endl;

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

	return 0;
}

int month_index_of_year(string month){
	if (month == "January") return 0;
	else if (month == "February") return 1;
	else if (month == "March") return 2;
	else if (month == "April") return 3;
	else if (month == "May") return 4;
	else if (month == "June") return 5;
	else if (month == "July") return 6;
	else if (month == "August") return 7;
	else if (month == "September") return 8;
	else if (month == "October") return 9;
	else if (month == "November") return 10;
	else if (month == "December") return 11;
	else return -1;
	
}

int index_of_first_day(string first_day){
	if (first_day == "Sunday") return 0;
	else if (first_day == "Monday") return 1;
	else if (first_day == "Tuesday") return 2;
	else if (first_day == "Wednesday") return 3;
	else if (first_day == "Thursday") return 4;
	else if (first_day == "Friday") return 5;
	else if (first_day == "Saturday") return 6;
	else return -1;
}