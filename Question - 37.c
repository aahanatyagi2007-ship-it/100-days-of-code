//Q37: Write a program to find the LCM of two numbers.

#include <stdio.h>

int prime_no(int num)
{
	int i =2;
	if (num < 2) return 0 ;
	
	for (;i< num;i++)
	{
		if (num % i == 0) 
		{
			return 0;
		}
	}
		
	return 1;
	}
		
int main(){
	int input1 , input2 ;
	int divisor = 2, product = 1;
	int divisible = 0; 
	
	scanf("%d %d" , &input1 , &input2);
	
	while (input1 > 1 || input2 > 1 )
	{	
		if (prime_no(divisor))
		{	
			divisible = 0;
			if ( input1%divisor==0 || input2%divisor==0 )
				divisible = 1;		
			while ( divisible )
			{
				product *= divisor;
				if (input1%divisor==0 )
					input1 = input1 / divisor;
				if (input2%divisor==0)
					input2 = input2 / divisor;
				if ( input1%divisor !=0 && input2%divisor != 0 )
					divisible = 0;
			}
				
		}
		divisor+=1;	
	}
	printf("%d" , product);
	return 0 ;
	}
