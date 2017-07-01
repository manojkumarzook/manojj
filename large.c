#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("\n enter the value:\n");
scanf("\n%d\n%d\n%d",&a,&b,&c);
if(a>b&&a>c)
printf("\n %d is greater",a);
else if(b>a&&b>c)
printf("\n %d is greater",b);
else if(c>a&&c>b)
printf("\n %d is greater",c);
else
printf("\n give correct value");
getch();
}
