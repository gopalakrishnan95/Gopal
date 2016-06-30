#include<stdio.h>
#include<conio.h>
void main()
{
int a,i,n=2,count=0;
clrscr();
printf("\n enter the prime number:");
scanf("%d",&a);
while(n<=a)
{
for(i=2;i<n;i++)
{
if(n%i==0)
goto t;
}
printf("\t%d",n);
count ++;
t:n++;
}
printf("\n number of prime number are %d",count);
getch();
}

