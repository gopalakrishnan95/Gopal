#include<stdio.h>
#include<conio.h>
void main()
{
int v,b=0;
char a[10];
clrscr();
printf("\nEnter the words: ");
scanf("%s",a);
for(v=0;a[v]!=0;v++)
{
if((a[v]=='a')||(a[v]=='e')||(a[v]=='i')||(a[v]=='o')||(a[v]=='u'))
{
b++;
}
}
printf("No of vowels= %d",b);
getch();
}
