//Q55: Write a program to print all the prime numbers from 1 to n.

#include <stdio.h>

int prime(int number){
	for ( int i = 2; i<= number;i++)
	{
		if ( number % i==0 && number != i)
		{
			return 0;
		}
	}
	return 1;
}

int main(){
	int input;
	scanf("%d" , &input);
	for ( int number = 2;number<=input;number++)
	{
		if (prime(number))
			printf("%d " , number);
	}
	return 0 ;
	}
