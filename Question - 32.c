//Q32: Write a program to check if a number is a palindrome.

#include <stdio.h>

int is_palin(int number)
{
		
	int r_digit=0;
	int reverse=0;
	int og_num = number;
	while (number != 0)
	{
		r_digit = number %10;
		reverse = reverse * 10 +r_digit;
		number /= 10;
	}
	return reverse == og_num;
	
	}
	
int main()
{
	int input = 0;
	scanf("%d", &input);
	if (is_palin(input))
	
		printf("palindome\n");
	
	else
		printf("not a palindrome\n");
		
	return 0 ;
	}
