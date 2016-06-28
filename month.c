#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("\n enter the dd/mm/yr");
scanf("%d/%d/%d",&a,&b,&c);
switch(b)
{
case 1:
printf("\n janvary");
break;
case 2:
printf("\n february");
break;
case 3:
printf("\n march");
break;
case 4:
printf("\n april");
break;
case 5:
printf("\n may");
break;
case 6:
printf("\n june");
break;
case 7:
printf("\n july");
break;
case 8;
printf("\n august");
break;
case 9:
printf("\n  september");
break;
case 10:
printf("\n october");
break;
case 11:
printf("\n november");
break;
case 12:
printf("\n december");
break;
}
getch();
}
