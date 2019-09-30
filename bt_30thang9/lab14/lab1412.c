#include<stdio.h>
#include <stdlib.h>

int main() {
   int i, j, *ptr, mt1[10][10], mt2[10][10], mt3[10][10];
   int row1, col1, row2, col2;
   ptr=(int*) mt1;

   printf("\nEnter row of matrix1: ");
   scanf("%d", &row1);
   printf("\nEnter column of matrix1: ");
   scanf("%d", &col1);

   printf("\nEnter row of matrix2: ");
   scanf("%d", &row2);
   printf("\nEnter column of matrix2: ");
   scanf("%d", &col2);

   /* check row and column*/
   if (row1 != row2 || col1 != col2) {
      printf("\nmatrix1!=matrix2!!!");
      exit(0);
   }

   //Nhap cac phan tu cua ma tran 1
   printf("\nNhap ma tran 1\n");
   for (i = 0; i < row1; i++) {
      for (j = 0; j < col1; j++) {
         printf("Nhap phan tu a[%d][%d] : ", i, j);
         scanf("%d", &mt1[i][j]);
      }
   }

   //Nhap cac phan tu cua ma tran 2
   printf("\nNhap ma tran 2\n");
   for (i = 0; i < row2; i++)
      for (j = 0; j < col2; j++) {
         printf("Nhap phan tu b[%d][%d] : ", i, j);
         scanf("%d", &mt2[i][j]);
      }

   //Cong hai ma tran
   for (i = 0; i < row1; i++)
      for (j = 0; j < col1; j++) {
         mt3[i][j] = mt1[i][j] + mt2[i][j];
      }

   //Hien thi ma tran ket qua
   printf("\nKet qua cua phep cong hai ma tran la: \n");
   for (i = 0; i < row1; i++) {
      for (j = 0; j < col1; j++) {
         printf("%d\t", mt3[i][j]);
      }
      printf("\n");
   }

   return (0);
}


