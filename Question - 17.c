//Q17: Write a program to find the roots of a quadratic equation and categorize them.

#include <stdio.h>
#include <math.h>

int main()
{
	int a = 0 , b = 0 , c= 0;
	printf("Enter coefficients: ");
	scanf("%d\n%d\n%d", &a, &b ,&c);
	int sol = b * b - (4 * a * c);
	int root = sqrt(sol);
	int p_root = (-b  +  root) / (2 * a);
	int n_root = (-b  - root) / (2 * a);
	
	if ( sol > 0 )
		printf("It has two real solutions:");
	else if (sol == 0 )
		printf("It has one real solution:");
		
	else{
		printf("It has two complex solutions\n");
		return 0;
		}
		
	if (p_root == n_root)
		printf("%d", p_root);
		
	else
		printf("%d,%d", n_root,p_root);
	return 0 ;
	}
