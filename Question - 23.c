/* Q23: Write a program to calculate library fine based on late days as follows: 
First 5 days late: ₹2/day 
Next 5 days late: ₹4/day 
Next 20 days days late: ₹6/day 
More than 30 days: Membership Cancelled.
*/
#include <stdio.h>

int main(){
	int input=0,day=1, fine =0, membership = 1;
	scanf("%d", &input);
	while (day<=input){
		if (day<=5){
			fine+=2;
			}
		else if (day > 5 && day<=10){
			fine+=4;
			}
		else if (day > 10 && day <= 30){
			fine+=6;
			}
		else{
			membership = 0;
			}
		day+=1;
		
		}
	if (membership)
		printf("Fine:%d\n" , fine);
	else
		printf("Goodbye since your membership is cancelled\n");
	return 0;
	}
			
			
