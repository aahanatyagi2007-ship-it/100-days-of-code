//Q29: Write a program to calculate the factorial of a number.

#include <stdio.h>

int main(){
	int input = 0, i =1,result = 1;
	scanf("%d", &input);
	for (i=1;i<=input; i++){
		result = i * result;
		}
	printf("%d", result);
	
	return 0;
	}
