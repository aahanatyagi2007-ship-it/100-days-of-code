//Q28: Write a program to print the product of even numbers from 1 to n.

#include <stdio.h>
#include <stdlib.h>

int main(){
	int input = 0, product = 1, num = 1;
	scanf("%d", &input);
	int length = input/2;
	int *arr = malloc(sizeof(int) * length);
	int index = 0;
	while (num <= input)
	{
		
		if ( num% 2== 0)
		{
			product *= num;
			arr[index] = num;
			index += 1;
			}
		num += 1;
		
		}
		
		
	printf("Product:%d (", product);
	for (int i = 0 ; i < length ; i++)
	{
		printf("%d", arr[i]);
		if ( i < length -1)
			printf("*");
		}
	printf(")");
	
	
	return 0 ;
	}
