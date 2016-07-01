#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[20],temp;
int i,b;
clrscr();
printf("\n enter the string:");
scanf("%s",a);
b=strlen(a);
for(i=0;i<b;++i)
{
temp=a[i];
a[i]=a[i+1];
a[i+1]=temp;
i++;
}
a[b+a]='\0';
printf("\n %s",a);
getch();
}
