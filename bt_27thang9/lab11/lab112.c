#include <stdio.h>
void main(){
	int i;
	int j;
	int tmp;
	int index;
	int arr[5];
	printf("nhap vao 1 mang\n");
	for(i=0;i<5;i++){
		scanf("%d",&arr[i]);
	}
	printf("mang khi chua sx la: ");
	for(i=0;i<5;i++){
		printf("%d",arr[i]);
	}
	for(i=0;i<(5/2);i++){		
		index=5-i-1;
		tmp=arr[index];
		arr[index]=arr[i];
		arr[i]=tmp;
	}
	printf("\nsau khi sap xep la: ");
	for(i=0;i<5;i++){
		printf("%d",arr[i]);
	}
}
	

