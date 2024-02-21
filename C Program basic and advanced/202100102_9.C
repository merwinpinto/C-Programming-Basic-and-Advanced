#include<stdio.h>
void main()
{
int i,num,a;
clrscr();
printf("enter any number between 2 and 10 :");
scanf("%d",&num);

for (i=1;i<=10;i++)
 {
 a=i*num;
 printf("%d * %d = %d \n ",num,i,a);
 }

 getch();
 }