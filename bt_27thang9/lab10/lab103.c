#include <stdio.h>
#include <stdio.h>
void main(){
	int cnt=0, num;
	do{
		printf("\n Enter a Number: ");
		scanf("%d",&num);
		printf("NO. is %d",num);
		cnt++;
	} while(num!=0);
	printf("\n The toal numbers entered were %d", --cnt);
	
}
