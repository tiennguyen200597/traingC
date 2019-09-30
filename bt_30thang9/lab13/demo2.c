#include <stdio.h>
#include <string.h>
void main(){
	char a, str[81], *ptr;
	printf("\n Enter a sentence: ");
	gets(str);
	printf("\n Enter character to seach for: ");
	a=getche();
	ptr=strchr(str,a);
	printf("\n String starts ar address: %u", str);
		//
		printf("\nFirst occurrence of the character is at address: %u", ptr);
		printf("\nPosition of first occurrence (starting from 0)is: %d", ptr-str);
	}

