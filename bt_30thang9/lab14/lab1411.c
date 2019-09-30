#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<malloc.h>
#include<stdlib.h>
char *reverse(char *s)
{
  char *tmp;
  int i;
  i = 0;
  tmp = (char *)malloc(strlen(s)+1);
  while (i<strlen(s))
    *(tmp+i) = *(s + strlen(s) - i++ - 1);
    *(tmp+i) = 0;
  return tmp;
}

void main()
{
  char str[80];
  char *s;
  printf("\nEnter a string: ");
  gets(str);
  printf("\nString befor: %s", str);
  s = reverse(str);
  printf("\nString after: %s", s);
  getch();
} 

