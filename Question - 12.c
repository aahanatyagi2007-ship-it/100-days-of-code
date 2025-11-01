//Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.

#include <stdio.h>

int main()
{
	int num = 0;
	scanf("%d", &num);
	if (num >= 0){
		if (num == 0){
			printf("Its ZERO");
			}
		else
			printf("Its positive");
			
			}
	else if (num < 0){
		printf("Its NEGATIVE");
		}
		
		return 0;
		
		}
	
