#include <stdio.h>
void main()
{
char *ptr[5];// tao mang con tro chua 5 chuoi ki tu
 	int i;
  	int j;
 	char cpyptr1[5][10],cpyptr2[5][10];
 	char *temp;

for(i = 0; i < 5; i++)
{
		printf("\nEnter a string: ");
	scanf("%s", cpyptr1[i]);
		ptr[i] = cpyptr1[i];
    	} 
 	for(i = 0; i < 5; i++)
  	strcpy(cpyptr2[i], cpyptr1[i]);
for(i = 0; i < 4; i++)
{
	for(j = i + 1; j < 5; j++)
		{
			if (strcmp(ptr[i], ptr[j]) > 0)
			{
				temp = ptr[i];
				ptr[i] = ptr[j];
				ptr[j] = temp;
			}
		}

		printf("\n The Original list is ");
		for(i = 0; i < 5; i++)
			printf("\n%s", cpyptr2[i]);	

		printf("\n The Sorted list is ");
		for(i = 0; i < 5; i++)
		printf("\n%s", ptr[i]);
}
}

