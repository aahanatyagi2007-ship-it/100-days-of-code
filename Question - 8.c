//Q8: Write a program to find and display the sum of the first n natural numbers.

#include <stdio.h>

int main()
{
	int total_numbers= 0, result = 0;
	scanf("%d", &total_numbers);
	for (int i=0; i < total_numbers; i++){
		result = (i + (result +1)) ;
		
		}
	printf("%d\n", result);
	
	return 0;
	}
		
		
