//Q1: Write a program to input two numbers and display their sum.

#include <stdio.h>
int main() 
{
    int a,b,sum;
    printf("Enter the numbers you want the sum of:\n");
    scanf("%d%d",&a,&b);
    sum=a+b;
    printf("The sum %d\n",sum);
    return 0;
}
