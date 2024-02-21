//Merwin Pinto
//202100102
//asst no : 18
//Display first 10 numbers of Fibonacci series using loop
#include <stdio.h>
void main()
{
 int term1=0,term2=1,term3=0,i;
 clrscr();
 printf("fibonacci series for 10 numbers is :\n");
 for(i=1;i<=10;i++)
 {
     printf("%d,",term3);
     term1=term2;
     term2=term3;
     term3=term1+term2;
 }
 getch();
}