//Q13: Write a program to input a year and check whether it is a leap year or not using conditional statements.

#include <stdio.h>

int main()
{
	int year = 0;
	printf("Type year:");
	scanf("%d", &year);
	if ((year % 4 ==0 && year % 100 != 0) || (year % 400 == 0)){
		printf("LEAP YEAR");
		}
		
	else
		printf("NOT A LEAP YEAR");
		
		
	return 0 ; 
	
	}
		
