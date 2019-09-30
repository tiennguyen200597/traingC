#include <stdio.h>
void main()
{
	char s1[20], s2[20], s3[40];
	char *ptr1, *ptr2, *ptr3;
	int i;
	int is3;
	printf("Enter s1: ");
	scanf("%s",s1);
	printf("Enter s2: ");
	scanf("%s",s2);
	//create ct 
	ptr1=&s1[0];
	ptr2=&s2[0];
	ptr3=&s3[0];
		i=0;
	while(*(ptr1+i)!='\0'){
			*(ptr3+is3++)=*(ptr1+i++);			
		}
		*(ptr3+is3)='\0';
		i=0;
	//
	while(*(ptr2+i)!='\0'){
			*(ptr3+is3++)=*(ptr2+i++);			
		}
		*(ptr3+is3)='\0';
		printf("%s", s3);
	
}

