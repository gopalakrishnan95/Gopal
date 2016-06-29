#include<stdio.h>
#include<conio.h>
void main()
{
char a[10];
clrscr();
printf("Enter the string:\n");
scanf("%s",a);
if(isdigit(a))
{
printf("false\n");
}
else
{
printf("true\n");
}
getch();
}
