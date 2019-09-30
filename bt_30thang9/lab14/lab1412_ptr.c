#include<stdio.h>
#include<conio.h>
#include<math.h>
void input(int *a,int m,int n)
{       int i,j,t;
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
        {
            t=i*n+j;
            printf("Enter a[%d,%d]=",i,j);
            scanf("%d",a+t);
        }
}
void output(int *p,int m,int n)
{       int i,j,t;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            t=i*n+j;
            printf("%d",*(p+t));
 
        }
    printf("\n");
    }
}
int main()
{	
	int i,j;	
    int a[2][4];
    int b[2][4];
    int c[2][4];
    printf("Input matrix a: \n");
    input((int*)a,2,4);
    printf("Input matrix b: \n");
    input((int*)b,2,4);
    for (i = 0; i < 2; i++)
      for (j = 0; j < 4; j++) {
         c[i][j] = a[i][j] + b[i][j];
      }
      printf("Count of tow matrix: ");
    output((int*)c,2,4);
    
getch();
}


