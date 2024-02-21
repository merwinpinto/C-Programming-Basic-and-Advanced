//Merwin Pinto
//202100102
//class : FY
//Btech in AI_DS
//Assignment no : 14
#include<stdio.h>
void main()
{
 int i,j;
 clrscr();
 for(i=1;i<=5;i++)
 {
     for(j=1;j<=5;j++)
	{
	     printf("\n");

	     for(j=2;j<=6;j++)
	     {
	     if(j==i+1)
	     printf("1");

	     if(j<6)
	     printf("%d",j);
	     }
        }
 }
  getch();
  }


