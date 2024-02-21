//Merwin Pinto
//202100102
//asst no : 21
//Read 10 numbers from user store in array nd display maximum and minimum out of them.
#include<stdio.h>
void main()
{
 int num[10];
 int max,min,i;
 clrscr();
 printf("enter any 10 numbers :\n");
 for(i=0;i<10;i++)
 {
  scanf("%d",&num[i]);
 }
 max=num[0];
 min=num[0];
  for(i=1;i<10;i++)
   {

     if(num[i]>max)
    {
    max=num[i];
    }
     if(num[i]<min)
    {
     min=num[i];
    }

    }
 printf("the number with maximum value is : %d \n",max);
 printf("the number with minimum value is : %d",min);
 getch();
}