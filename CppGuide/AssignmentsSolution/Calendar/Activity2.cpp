#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
void printCalendar(int year);
int numberOfDays(int month_index, int year);
int dayNumber(int day, int month, int year);
string getMonthName(int monthNumber);

int main(){
	int year = 2022;
	string header(30, '*');
	cout << header << year << header << endl;
	printCalendar(year);

}

void printCalendar(int year){
	printf("Calendar - %d::\n", year);

	int days;
	int current = dayNumber(1, 1, year);
	cout << "current : " << current;

	for(int mon_ix = 0; mon_ix < 12; mon_ix++){
		days = numberOfDays(mon_ix, year);

		printf("%s  \n", getMonthName(mon_ix).c_str());

		printf("Sun Mon Tue Wed Thu Fri Sat\n");

		int k;
		for(k=0; k < current; k++)
			printf("    ");

		for(int j=1; j <= days; j++){
			printf("%-4d", j);

			if(++k > 6){
				k = 0;
				printf("\n");
			}
		}

		if(k)
			printf("\n");

		current = k;

	}
}

int numberOfDays(int month_index, int year){
	if (month_index == 0) 
		return  31;

	else if (month_index == 1){
		if ((year % 400 == 0 && year % 100 == 0) || (year % 4 == 0 && year % 100 != 0))
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

int dayNumber(int day, int month, int year){
	static int t[] = {0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4};

	year -= month < 3;
	return (year + year/4 - year/100 + year/400 + t[month-1] + day)%7;
}


string getMonthName(int monthNumber){
	string months[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
	return months[monthNumber];
}













