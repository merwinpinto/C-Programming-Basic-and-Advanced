//Merwin Pinto
//202100102
//class : FY
//Btech in AI_DS
//Assignment no : 16
#include<stdio.h>
void main()
{
 float n,sum;
 clrscr();
 printf("enter numbers to get total, to end press zero \n");
 scanf("%f",&n);
 while(n!=0)
 {
 sum += n;
 scanf("%f",&n);
 }
 printf("the sum is %f \n",sum);
 getch();
 }