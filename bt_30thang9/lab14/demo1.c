#include<stdio.h>
#include<malloc.h>

int main (){
	char *ptr;
	char word[10];
	int i, vowcnt=0;
	printf("\n Enter a word: ");
	scanf("%s",word);
	ptr=&word[0];
	for(i=0;i<strlen(word);i++){
		if((*ptr=='a') || (*ptr=='e') || (*ptr=='i') ||
		 	(*ptr=='o') || (*ptr=='u') || (*ptr=='A') ||
			(*ptr=='E') || (*ptr=='I') || (*ptr=='O') ||
			(*ptr=='U')){
				vowcnt++;		
			}
			ptr++;
	}
	printf("the word is: %s \n the number of vowals in the word is: %d", word, vowcnt);
}
	


