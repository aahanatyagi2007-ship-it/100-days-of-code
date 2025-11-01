//*Q24: Write a program to calculate electricity bill based on units consumed with these rates: 

First 100 units at ₹5/unit 
Next 100 units at ₹7/unit 
Next 100 units at ₹10/unit 
Above at ₹12/unit
*/
#include <stdio.h>

int main(){
	int input = 0, units= 1, bill= 0; 
	scanf("%d", &input);
	while (units<= input)
	{
		if (units<=100)
		
			bill +=5;
			
		else if (units>100 && units <= 200)
		
			bill +=7;
			
		else if (units>200 && units <=300)
		
			bill += 10;
			
			
		else
			bill += 12;
			
	units += 1;
	}
	
	printf("Bill: $%d", bill);
	return 0 ;
	}
			
	
