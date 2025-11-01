//Q21: Write a program to display the month name and number of days using switch-case for a given month number.

#include <stdio.h>

int main(){
	int input=0;
	scanf("%d", &input);
	switch (input){
	case 1:
		printf("January, 31 days");
		break;
	case 2:
		printf("February, 28 days");
		break;
	case 3:
		printf("March, 31 days");
		break;
	case 4:
		printf("April, 30 days");
		break;
	case 5:
		printf("May, 31 days");
		break;
	case 6:
		printf("June, 30 days");
		break;
	case 7:
		printf("July, 31 days");
		break;
	case 8:
		printf("August, 30 days");
		break;
	case 9:
		printf("September, 31 days");
		break;
	case 10:
		printf("October, 30 days");
		break;
	case 11:
		printf("November, 31 days");
		break;
	case 12:
		printf("December, 30 days");
		break;
		}
		
		return 0 ;
		}
