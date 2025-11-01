//Q7: Write a program to swap two numbers without using a third variable.

#include <stdio.h>
int main(void)
{
	int a,b;
	int numbers[4] = {1,2};
	printf("Type a:");
	scanf("%d", &a);
	numbers[0] = a;
	printf("Type b:");
	scanf("%d", &b);
	numbers[1] = b;
	a= numbers[1];
	b= numbers[0];
	printf("Your a:%d\n", a);
	printf("Your b:%d",b);
	return 0;
	}
