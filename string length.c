#include <stdio.h>
#include<conio.h>
#include <string.h>
void main()
{
char a[15];
int b=0;
clrscr();
printf("Enter the String: \n");
scanf("%s",a);
b=strlen(a);
printf("\nentered the string length is= %d",b);
getch();
}
