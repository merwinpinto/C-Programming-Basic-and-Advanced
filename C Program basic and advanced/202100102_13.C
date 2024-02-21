//Merwin Pinto
//202100102
//class : FY
//Btech in AI_DS
//Assignment no : 13
#include<stdio.h>
void main()
{
int i,k;
clrscr();
for(i=1;i<=4;i++)
{
     for(k=1;k<=4;k++)
     {
      if(i%2==1)
      {
      printf("2");
      }
      else
      {
      printf("1");
      }
       if(k==2)
	{
	   if(i%2==1)
	   {
	   printf("1");
	   }
	   else
	   {
	   printf("2");
	   }
      }
    }
     printf("\n");
}
getch();
}





















