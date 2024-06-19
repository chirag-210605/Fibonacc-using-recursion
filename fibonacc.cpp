#include<stdio.h>
#include<conio.h>
void main()
{
  int f1,f2,f3,n,i;
f1=0;
f2=1;
clrscr();
printf(" \n enter how many numbers ");
scanf("%d",&n);
printf(" fibonacci series ");
printf(" %d\t %d\t ",f1,f2);
for(i=1;i<=n;i++)
{
f3=f1+f2;
printf(" %d\t ",f3);
f1=f2;
f2=f3;
}
getch();
}
