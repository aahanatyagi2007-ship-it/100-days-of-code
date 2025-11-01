//Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

#include <stdio.h>
#include <stdbool.h>

int main(void){
	int p= 0;
	int b = 0;
	int h = 0;
	printf("Type first side:");
	scanf("%d", &p);
	printf("Type second side:");
	scanf("%d", &b);
	printf("Type third side:");
	scanf("%d", &h);

	if (h*h == b*b + p*p){
		printf("This is a right angled triangle\n");
		}
	else if (h==p || h==b || p==b){
		printf("This triangle is isoceles triangle\n");	
		}
	else if ( h==p && h==b && b==p){
	printf("This is an equilateral triangle");
	}
	else {
	printf("This is a scalene triangle");
	}
	return 0;
	}
