//Q39: Write a program to find the product of odd digits of a number.

#include <stdio.h>

int main(){
	int input = 0, l_digit = 0, product = 1;
	scanf("%d" , &input );
	while (input != 0 ){
		l_digit = input % 10;
		if (l_digit % 2 !=0)
			product *= l_digit;
		input /= 10;
		}
	printf("Product:%d" , product);
	return 0 ;
	}
