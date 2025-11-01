//Q56: Read and print elements of a one-dimensional array.

#include <stdio.h>
#include <stdlib.h>

int main(){
	int size;
	int *arr={};
	int length;
	scanf("%d", &size);
	arr=  malloc( size * sizeof(int));
	for (int i = 0 ; i< size; i++)
	{
		scanf(" %d" , &arr[i]);
	}
	for ( int i = 0 ; i<size;i++)
	{
		printf("%d " , arr[i]);
	}
	
	return 0 ;
	}
