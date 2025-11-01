//Q59: Count even and odd numbers in an array.

#include <stdio.h>
#include <stdlib.h>
int main(){
	int size;
	scanf("%d" , &size);
	int *arr;
	arr=malloc(sizeof(int) * size);
	for ( int i = 0 ; i< size; i++)
	{
		scanf(" %d" , &arr[i]);
	}
	printf("Even numbers:");
	for ( int ind = 0 ; ind < size; ind++)
	{
		if ( arr[ind] == 0 )
			continue;
		if ( arr[ind] % 2 == 0 )
		{
			printf("%d ", arr[ind]);
		}
			
		
	}
	printf("\nOdd numbers:");
	for ( int ind = 0 ; ind < size; ind++)
	{
		if ( arr[ind] == 0 )
			continue;
		if ( arr[ind] % 2 != 0 )
		{
			printf("%d ", arr[ind]);
		}
		
	}
	return 0 ;
}
