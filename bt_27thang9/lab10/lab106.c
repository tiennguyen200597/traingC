#include <stdio.h>
#include <stdio.h>
void main(){
	int n;
	int i;
	int giaithua;
	printf("Nhap vao n: ");
	scanf("%d",&n);
	if(n==0){
		printf("gai thua cua n la 1");
	}
	else{
		for (i=1;i<=n;i++){
			giaithua *=i;
		}
		printf("gia tri cua giai thua la %d",giaithua);
	}
	return 0;
}
