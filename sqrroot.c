#include<stdio.h>
#include<conio.h>
void main()
{
int x,x1,x2,y1,y2;
clrscr();
printf("Enter values x1,x2,y1,y2 : ");
scanf("%d\n%d\n%d\n%d",&x1,&x2,&y1,&y2);
x=((x1+x2)*(x1+x2))+((y1+y2)*(y1+y2));
printf("sqrtroot is= %d",x);
getch();
}
