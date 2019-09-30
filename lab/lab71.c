#include <stdio.h>

int main ()
{
   int a;
   int b;   
   printf("nhap a:\n");
   scanf("%d",&a);
   printf("nhap b:\n");
   scanf("%d",&b);
   if(a%b==0){
   	printf("%d chia het cho %d",a,b);
   }
   else{
   	printf("%d khong chia het cho %d",a,b);
   }
   return 0;
}
