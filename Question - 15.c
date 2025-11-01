//Q15: Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.

#include <stdio.h>

int main()
{
	char input;
	scanf("%c", &input);
	//printf("%d", input);
	int ascii = input ;
	if (ascii >=65 && ascii <= 90)
		printf("Its an uppercase letter");
	else if (ascii >=97 && ascii <= 122)
		printf("Its a lowercase letter");
	else if (ascii >=48 && ascii <= 57)
		printf("Its a digit");
	
	else
		printf("Its a special character");
	
	return 0 ;
	}
