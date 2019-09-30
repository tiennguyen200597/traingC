#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<malloc.h>

int main (){
	char *ptr;
	printf("Enter name animal: ");
	ptr=(char*)malloc(100*sizeof(char));
	scanf("%s",ptr);
	//bird
	char *bird;
	printf("Enter name bird: ");
	bird=(char*)malloc(100*sizeof(char));
	scanf("%s",bird);
	char* temp;
	temp=(char*)malloc(100*sizeof(char));
	strcpy(temp,"s");
	strcat(ptr,temp);
	strcat(bird,temp);
	printf("\n%s",ptr);
	printf("\n%s",bird);
	
	getch();
	return 0;
}
	


