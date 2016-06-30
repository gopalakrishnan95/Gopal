#include <stdio.h>
#include<stdio.h>
void main()
{
int a,i,c,b= 1;
clrscr();
printf("\nEnter rows of Triangle: ");
scanf("%d",&a);
for (i=1;i<=a;i++)
{
for (c=1;c<=i;c++)
{
printf("%d ",b);
b++;
}
printf("\n");
}
getch();
}
