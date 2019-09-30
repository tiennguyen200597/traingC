#include <stdio.h>

int main ()
{
   int a;
   int b;   
   printf("nhap a:\n");
   scanf("%d",&a);
   printf("nhap b:\n");
   scanf("%d",&b);
   if(abs(a-b)==a){
   	printf("%d tru %d bang %d",a,b,a);
   }
   else if(abs(a-b)==b) {
   	printf("%d tru %d bang %d",a,b,b);
   }
   else{
   	printf("hieu khong bang gia tri nao");
   }
   return 0;
}

