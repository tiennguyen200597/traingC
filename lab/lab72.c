#include <stdio.h>

int main ()
{
   int a;
   int b;   
   printf("nhap a:\n");
   scanf("%d",&a);
   printf("nhap b:\n");
   scanf("%d",&b);
   if(a*b==1000){
   	printf("%d nhan %d bang 1000",a,b);
   }
   else if(a*b<1000) {
   	printf("%d nhan %d nho hon 1000",a,b);
   }
   else{
   	printf("%d nhan %d lon hon 1000",a,b);
   }
   return 0;
}
