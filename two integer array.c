#include<stdio.h>
#include<conio.h>
void main()
{
int a[5],b[5],c,i,j,sum=0;
clrscr();
printf("\nEnter first set:");
for(i=0;i<5;i++)
{
scanf("%d",&a[i]);
}
printf("\nEnter Second set: ");
for(j=0;j<5;j++)
{
scanf("%d",&b[j]);
}
for(i=0;i<5;i++)
{
for(j=0;j<5;j++)
{
printf("");
if(a[i]==b[j])
{
sum=sum+a[i];
}}}
printf("\nthe sum is %d",sum);
getch();
}

