#include<stdio.h>
#include<conio.h>
void main()
{
int a;
clrscr();
printf("\nenter the value:");
scanf("%d",&a);
if(a%2==0)
printf("\n %d is even",a);
else
printf("\n %d is odd",a);
getch();
}
