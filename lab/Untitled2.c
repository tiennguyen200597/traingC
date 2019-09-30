#include <stdio.h>

//#define CHIEUDAI 15   
//#define CHIEURONG  12
//#define NEWLINE '\n'

int main()
{
	const int  CHIEUDAI = 15;
   const int  CHIEURONG  = 12;
   const char NEWLINE = '\n';
   int dientich;    
   dientich = CHIEUDAI * CHIEURONG;
   printf("Dien tich hinh chu nhat la: %d", dientich);
   printf("%c", NEWLINE);
   printf("===========================\n");
   printf("VietJack chuc cac ban hoc tot! \n");
   return 0;
}
