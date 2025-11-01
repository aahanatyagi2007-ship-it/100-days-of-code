/*Q54: Write a program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   *
*/
#include <stdio.h>

int main(){
	int times = 3;
	int star = 1;
	for ( int row = 1;row<=4;row++)
	{
		for (int space = times;space>0;space--)
		{
			printf(" ");
		}
		for( int print=1;print<=star;print++)
		{
			printf("*");
		}
		star+=2;
		times--;
		printf("\n");
	}
	times=1;
	star=5;
	for ( int row = 1; row<=3;row++)
	{
		for ( int space=times;space>0;space--)
		{
			printf(" ");
		}
		for ( int print=1;print<=star;print++)
		{
			printf("*");
		}
		
		printf("\n");
		times++;
		star-=2;
	}
	return 0 ;
	}
