#include<stdio.h>
void main()
{
int C,F,ch ;
clrscr();

printf("enter option 1 for celsius to fahrenheit \n\nenter option 2 for fahrenheit to celsius \n");
scanf("%d",&ch);

 if (ch== 1)

{

 printf("celsius to fahrenheit\n");
 printf("C = ");
 scanf ("%d",&C);
 printf("F = (C*9/5)+32 \n");
 printf("F = %d",(C*9/5)+32 );

 }

 else if (ch== 2)

{

 printf("Fahrenheit to celcius\n");
 printf("F = ");
 scanf ("%d",&F );
 printf("C = (F-32)*5/9\n");
 printf("degree Celsius ( C ) = %d",(F-32)*5/9 );

 }

getch();

}