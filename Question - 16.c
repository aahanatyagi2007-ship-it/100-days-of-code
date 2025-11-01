//Q16: Write a program to input three numbers and find the largest among them using if–else.

#include <stdio.h>

int main(){
	int a= 0 , b = 0, c = 0;
	int arr[] = {1,2,3};
	scanf("%d\n%d\n%d", &a , &b , &c);
	int length = sizeof(arr)/sizeof(arr[0]);
	arr[0] = a;
	arr[1] = b;
	arr[2] = c;
	int max = arr[0];
	for (int i = 0; i < length ; i++)
  {
		if (arr[0] < arr[i])
		{
			max = arr[i];
			
			}
					}	
	printf("Largest:%d", max);
	return 0;
	}
		
