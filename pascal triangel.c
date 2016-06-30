#include<stdio.h>
#include<conio.h>
long fact(int);
void main()
{
int a,g,e;
clrscr();
printf("Enter how many lines: ");
scanf("%d",&a);
for(g=0;g<a;g++)
{
for(e=0;e<a-g-1;e++)
printf(" ");
for(e=0;e<=g;e++)
printf("%ld ",fact(g)/(fact(e)*fact(g-e)));
printf("\a");
}
getch();
}
long fact(int num)
{
long f=1;
int g=1;
while(g<=num)
{
f=f*g;
g++;
}
return f;
}
