#include <stdio.h>
#include <malloc.h>

void main(){
	int *p, n, i, j, temp;
	printf("\n Enter number of elements in the array: ");
	scanf("%d",&n);
	p=(int*)malloc(n* sizeof(int));
	for(i=0;i<n;++i){
		printf("\n Enter element no.%d :",i+1);
		scanf("%d",p+i);
	}
	// sap xep theo thu tu lon dan
	for(i=0; i<n-1;++i){
		for(j=i+1;j<n; ++j){
			if(*(p+i)>*(p+j)){
				temp=*(p+i);
				*(p+i)=*(p+j);
				*(p+j)=temp;
			}
		}
	}
	for(i=0; i<n;++i){
		printf("%d\n", *(p+i));
	}
	
	}

