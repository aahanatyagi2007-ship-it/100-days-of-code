//Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

#include <stdio.h>
#include <math.h>

int p=0, t=0;
float r=0;

int main()
{

	int  s_int=0, base=0;
	float c_int=0;
	printf("Type principal:");
	scanf("%d", &p);
	printf("TYpe Rate:");
	scanf("%f", &r);
	printf("Type time:");
	scanf("%d", &t);
	s_int = (p * r * t)/100;
	base = p * pow((1+ r/100), t);
	//exp = n * t;
	c_int = base - p;
	printf("Simple Interest:%d\nCompound interest:%.2f", s_int, c_int);
	return 0;
	}
