// Q33: Write a program to check if a number is an Armstrong number.

#include <stdio.h>
#include <stdlib.h>

int count_digits(int integer)
{
		int count = 0;
		while (integer!= 0)
		{
			integer /= 10;
			count += 1;
			}
	return count;
		}
		
int power(int base ,int exponent)
{
	int result = 1;
	for ( int y= 0; y < exponent;y++)
	{
		result *= base;
		}
	return result;
	}
	
	
int is_armstrong(int input)
{
	int remainder = 0, f_result = 0, sum=0;
	int org_num = input;
	int digits = count_digits(input);
	
	while (org_num > 0)
	{
		
		remainder = org_num % 10;
		f_result =  power(remainder, digits);
		//printf("%d", f_result);
		sum += f_result;
		org_num /= 10;
	}
	return sum == input;
}
int main(){
	int the_num = 0;
	scanf("%d", &the_num);
	if ( is_armstrong(the_num))
		printf("its armstrong");
	else
		printf("its not armstrong");
		
	return 0 ;
	
	}
