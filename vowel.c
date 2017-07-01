#include<stdio.h>
#include<conio.h>
void main()
{
char ch;
clrscr();
printf("\nenter the value:");
scanf("%c",&ch);
if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
printf("\nvowel");
else 
printf("\nconsonant");
getch();
}
