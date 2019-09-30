#include <stdio.h>
#include <stdio.h>
void main(){
	int n;
	int i;
	printf("Nhap vao n: ");
	scanf("%d",&n);
	printf("%d",giaithua(5));
	return 0;
}
int giaithua(int n){
	if(n>0){
		return n*giaithua(n-1);
	}
	else{
		return 1;
	}
}
