//Merwin Pinto
//202100102
//class : FY
//Btech in AI_DS
//Assignment no : 12
#include<stdio.h>
int main()
{
 int i=5,j,num=72;
 clrscr();
while(num>=66)
  {
       for(j=1;j<=i;j++)
	   printf("%c ",num);
	   i--;
	   printf("\n");
	   num-=2;
  }
 getch();
 return 0;
}