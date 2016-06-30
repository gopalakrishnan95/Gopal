#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[20],s[20];
int i,j=0;
clrscr();
printf("Enter a word: ");
scanf("%s",a);
strrev(a);
printf("reversed word is: %s",a);
for(i=0;i<=strlen(a);i++)
{
if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
a[i]=' ';
else
s[j++]=a[i];
}
s[j]='\0';
printf("\n The word without vowel is->%s",s);
getch();
}
