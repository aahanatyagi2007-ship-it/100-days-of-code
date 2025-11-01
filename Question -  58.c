//Q58: Find the maximum and minimum element in an array.

#include <stdio.h>
#include <stdlib.h>

int main(){
	int size,og;
	int *array;
	scanf("%d", &size);
	int t;
	og= size;
	array=malloc(sizeof(int) * size);
	for ( int i = 0; i< size; i++)
	{
		scanf(" %d", &array[i]);
	}
	
	for ( int run = 1 ; run <= (og-1); run++)
	{
		for ( int i = 0 ; i < (size-1); i++)
		{
			if ( array[i] > array[i+1])
			{
				t = array[i];
				array[i]= array[i+1];
				array[i+1]= t;
			}
			
		}
		
		size -= 1;
	}
	printf("%d %d " , array[0], array[og-1]);
	return 0 ;
	}
		
