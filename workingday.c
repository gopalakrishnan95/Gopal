#include<stdio.h>
#include<conio.h>
void main()
{
char a[50];
clrscr();
printf("\n enter the day :");
scanf("%s",a);
if(strcmp(a,"sunday")==0)
{
printf("\nfalse");
}
else if((strcmp(a,"monday")==0)||(strcmp(a,"tuesday")==0)||(strcmp(a,"wednesday")==0)||(strcmp(a,"thursday")==0)||(strcmp(a,"friday")==0)||(strcmp(a,"saturday")==0))
{
printf("\ntrue");
}
else
{
printf("\n INVALID DATA");
}
getch();
}
