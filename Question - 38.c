//Q38: Write a program to find the sum of digits of a number.

#include <stdio.h>

int main(){
	int input =0, digit = 0, sum = 0, l_digit = 0;
	scanf("%d" , &input);
	int og_num= input ;
	while ( input != 0){
		input /= 10;
		digit += 1 ;
		}
	
	for ( int i = 0 ; i < digit ; i ++){
		l_digit = og_num % 10;
		sum += l_digit;
		og_num /= 10;
		}
		
	printf("Sum: %d" , sum);
	return 0 ;
	}
	
