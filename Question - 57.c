//Q57: Find the sum of array elements.

#include <stdio.h>
#include <stdlib.h>

int main(){
	int *array;
	int size ;
	int sum=0;
	scanf("%d" , &size);
	array= malloc(sizeof(int) * size);
	for ( int i=0; i< size; i++)
	{
		scanf(" %d", &array[i]);
	}
	for ( int i=0; i< size; i++)
	{
		sum+= array[i];
	}
	printf("%d" ,sum);
	return 0 ;
	}
