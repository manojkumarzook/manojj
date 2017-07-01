#include<stdio.h>
#include<conio.h>
void main()
{
char ch;
clrscr();
printf("enter the value:");
scanf("%c",&ch);
if(ch>='a'&&ch<='z'||ch>='A'&&ch<='Z')
printf("\n %c is Alphabet",ch);
else
printf("\n not Alphabet");
getch();
}
