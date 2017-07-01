#include<stdio.h>
#include<conio.h>
void main()
{
int year;
clrscr();
printf("\n enter the value:");
scanf("%d",&year);
if(year%4==0&&year%100!=0||year==400)
printf("\n %d is leap year",year);
else
printf("\n %d is not leap year",year);
getch();
}
