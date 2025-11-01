//Q60: Count positive, negative, and zero elements in an array.

#include <stdio.h>
#include <stdlib.h>

int main(){
	int size ;
	scanf("%d" , &size);
	int *arr;
	int pos , neg , zero;
	arr=malloc(sizeof(int) * size);
	
	for ( int i = 0 ; i< size; i++)
	{
		scanf(" %d" , &arr[i]);
	}
	printf("Positive count:");
	for ( int i = 0 ; i < size ; i++)
	{
		if ( arr[i] > 0 )
			pos+=1;
	}
	printf("%d" , pos);
	printf("\nNegative count:");
	for ( int i = 0 ; i < size ; i++)
	{
		if ( arr[i] < 0 )
			neg+=1;
	}
	printf("%d" , neg);
	printf("\nZero count:");
	for ( int i = 0 ; i < size ; i++)
	{
		if ( arr[i] == 0 )
			zero+=1;
	}
	printf("%d" , zero);
	return 0 ;
	}
	
