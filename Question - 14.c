//Q14: Write a program to input a character and check whether it is a vowel or consonant using if–else.

#include <stdio.h>
#include <ctype.h>

int main()
{
	char input;
	char vowels[100] = {'A', 'E', 'I', 'O', 'U'};
	int length = sizeof(vowels)/ sizeof(vowels[0]);
	char letter = toupper((unsigned char) input);
	printf("type a letter:");
	scanf("%c", &input);
	for ( int i = 0; i < length; i++){
		if (input == vowels[i]){
			printf("ITS A VOWEL");
			break;
			}
		else
			printf("NOT A VOWEL");
			break;
			}
			
	return 0 ;
	}
