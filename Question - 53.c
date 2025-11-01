/*Q53: Write a program to print the following pattern:
*
***
*****
*******
*********
*******
*****
***
*
*/
#include <stdio.h>

int main(){
	int count = 1;
	int antiloop=7;
	for ( int row = 1 ; row <=5; row++)
	{
		for ( int star=1; star <=count;star++)
		{
			printf("*");
		}
		printf("\n");
		count +=2;
	}
	for ( int row = 1 ; row<=4;row++)
	{
		for (int star = 1;star<=antiloop;star++)
		{
			printf("*");
		}
		antiloop-=2;
		printf("\n");
	}
	return 0 ;
	}
