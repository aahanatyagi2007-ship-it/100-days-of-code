/*Q51: Write a program to print the following pattern:
    5
   45
  345
 2345
12345
*/
#include <stdio.h>

int main(){
	int limit = 5 ;
	for ( int row = 0 ; row < 5 ; row++)
	{
		for ( int count = 1; count <= 5; count++)
		{
			if ( count >= limit)
			{
				printf("%d " , count);
			}
			
			else
				printf(" ");
		}
		
		limit--;
		printf("\n");
	}
	return 0 ;
	}
