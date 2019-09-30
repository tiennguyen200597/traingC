#include <stdio.h>
 
/* khai bao ham */
int timGTLN(int so1, int so2);
 
int main ()
{
   /* phan dinh nghia bien cuc bo  */
   int a = 667;
   int b = 7028;
   int kq;
 
   /* goi ham de tim gia tri lon nhat */
   kq = timGTLN(a, b);
 
   printf( "Gia tri lon nhat la : %d\n", kq );
   printf("\n===========================\n");
   printf("VietJack chuc cac ban hoc tot! \n");
 
   return 0;
}
 
/* phan dinh nghia ham de tra ve gia tri lon nhat giua hai so */
int timGTLN(int so1, int so2) 
{
   /* khai bao bien cuc bo */
   int ketqua;
 
   if (so1 > so2)
      ketqua = so1;
   else
      ketqua = so2;
 
   return ketqua; 
}
