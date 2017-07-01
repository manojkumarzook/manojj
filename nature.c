#include<stdio.h>
#include<conio.h>
void main()
{
int i,num,sum=0;
clrscr();
printf("\n enter the value");
scanf("%d",&num);
for(i=1;i<=num;i++)
{
sum=sum+1;
}
printf("sum of first %d natural number=%d\n",num,sum);
getch();
}
