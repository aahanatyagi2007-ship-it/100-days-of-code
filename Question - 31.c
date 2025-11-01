//Q31: Write a program to take a number as input and print its equivalent binary representation.

#include <stdio.h>

int main(){
	int input= 0 , remainder = 0, unreversed = 0, bucket = 0, reversed = 0,
	 temp= 0;
	scanf("%d", &input);
	temp = input;
	while (input != 0)
	{
		remainder = input % 2;
		unreversed = unreversed * 10 + remainder;
		input = input / 2;
		}
	
	bucket = unreversed;
	// zero can also be in the start
	
	while (bucket != 0)
	{
		remainder = bucket % 10;
		reversed = reversed * 10 + remainder;
		//printf("%d", reversed);
		bucket /= 10;
		}
	printf("Binary representation of %d: %d\n ",temp, reversed);
	
	return 0 ;
	}
	
