
//Q40: Write a program to find the 1’s complement of a binary number and print it.

#include <stdio.h>

int main(){
int input = 0, binary= 0, rev = 0, r_digit = 0 ;
int unrev = 0, digit = 0, l_digit = 0;
scanf("%d" , &input);
int  og= input;

while (input != 0)
{
input /= 10;
digit += 1;
}

if (digit != 4 && og != 0)
{
printf("Please input a 4 digit binary number only\n");
return 0 ;
}

if (og == 0)
{
printf("Compliment: 1111");
return 0 ;
}
for (int i = 0 ; i < digit; i++)S
{
l_digit = og% 10;
if (l_digit ==1)
l_digit = 0;
else
l_digit = 1;
unrev = (unrev* 10 ) + l_digit;
og /= 10;
}
printf("Compliment: ");

if ( unrev == 0)
{
printf("0000");
return 0 ;
}
while (unrev != 0){
r_digit = unrev % 10;
unrev /= 10;
printf("%d" , r_digit);
}

return 0 ;
}
