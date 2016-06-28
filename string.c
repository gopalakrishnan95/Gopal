#include<stdio.h>
#include<conio.h>
void main()
{
char a[30];
clrscr();
printf("\nenter the string");
scanf("%s",a);
strrev(a);
printf("\n the reversed string %s",a);
getch();
}
