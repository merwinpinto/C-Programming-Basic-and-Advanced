#include<stdio.h>
void main()
{
char vn;
int ch,a,b;
clrscr();
printf("welcome to Cinépolis Parking\n");
printf("enter vehicle number :");
scanf("%s",&vn);
printf("for two wheeler vehicle type 2\n");
printf("for four wheeler vehicle type 4\n");
scanf("%d",&ch);

if(ch == 2)
{
  printf("two wheeler vehicle\n");
  printf("Time spent with vehicle : 1 , 5 , 7, 24 ( in hours ) \n");
  scanf("%d",&a);
  printf("the amount to be paid is :");

  if(a== 1)
  {
  printf(" 2 Rs\n");
  }

  else if(a== 5)
  {
  printf("5 Rs\n");
  }

  else if(a== 7)
  {
  printf("9 Rs\n");
  printf("the amount is 9 R // parked for 2hrs extra\n" );
  }

  else if(a== 24)
  {
  printf("10 Rs\n");
  }
}

if(ch == 4)
{
  printf("four wheeler vehicle\n");
  printf("Time spent with vehicle : 1 , 5 , 24 ( in hours ) \n");
  scanf("%d",&b);
  printf("the amount to be paid is :");

  if(b== 1)
  {
  printf(" 5 Rs\n");
  }

  else if(b== 5)
  {
  printf(" 20 Rs\n");
  }

  else if(b== 24)
  {
  printf(" 100 Rs\n");
  }

}
printf("Thanks for visiting ! Have a good day .\n");
getch();
}
