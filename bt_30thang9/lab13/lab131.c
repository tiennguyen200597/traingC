#include<stdio.h>
#include<malloc.h>

int main (){
	
	char *ptr;
	ptr=(char*)malloc(100*sizeof(char));
	int i, j, n, k = 0;
	printf ("\nEnter a string:");
	scanf ("%s",ptr);
	n = strlen( ptr );
	for (i = 0,j = ( n - 1 ); i <(n/2); i++ , j--){
		
	if ( *( ptr + i ) == *( ptr + j ) ){
		k++;
	}
	}	
	if ( k == ( n / 2 ) ){		
		printf ("Chuoi khi dao nguoc la giong nhau: ");
		printf("%s",ptr);
	}
	else{
	printf ("chuoi k dung yeu cau");
	}
	getch();// dung lai man hinh consol de xem ket qua
	return 0;
}
	


