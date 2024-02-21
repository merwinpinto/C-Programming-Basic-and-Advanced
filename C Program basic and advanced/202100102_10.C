// Merwin_Pinto ( FY BTech AI & DS )
// Srn:202100102
// File Type : .C type
#include<stdio.h>
void main()
{
 int i,j,num,table=0;
 clrscr();
 printf("enter the number for printing required table : \n");
 scanf("%d",&num);
 for(i=1;i<=10;i++)
  {
  for(j=2;j<=num;j++)
  {
   table=i*j;
   printf("%d \t ",table);
  }
 printf("\n");
 }
getch();
}