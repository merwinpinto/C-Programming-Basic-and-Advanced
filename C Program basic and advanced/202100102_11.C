//Name :Merwin Pinto
//Class:FY
//Btech in AI_DS
//Assignment_no : 11

#include<stdio.h>
void main()
{
int num,i,ftrl=1;
clrscr();
printf("Enter the number for which we have to print factorial :\n");
scanf("%d",&num);
for ( i=1;i<=num;i++)
{
ftrl = ftrl*i;
}

printf("factorial = %d",ftrl);
getch();
}

