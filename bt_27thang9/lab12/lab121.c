#include <stdio.h>
void main(){
	int var =500, *ptr_var;
	
	ptr_var=&var;
	printf("The value %d is stored at address: %u \n", var,&var);
	printf("the value %u is stored at address: %u \n", *ptr_var, &ptr_var);
	printf("The value %d is stored at address: %u \n", var,&var);
	
}
	

