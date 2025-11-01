/*Q52: Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*
*/
#include <stdio.h>

int main(){
	int times = 1;
	int antiloop=3;
	for ( int row = 1 ;row <=3 ; row++)
	{
		for ( int count = 1 ; count<=times;count++)
		{
			printf("*\n");
		}
		times+=2;
		printf("\n");
	}
	for ( int row = 1 ; row <=2 ; row++)
	{
		for ( int count = 1 ; count <= antiloop; count++)
		{
			printf("*\n");
		}
		antiloop -=2;
		printf("\n");
	}
	return 0 ;
	}
