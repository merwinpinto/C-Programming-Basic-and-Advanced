#include<stdio.h>
void main()
 {
 int i , n , sum = 0 ;
 float run_rate;
 clrscr();

 for(i=1 ;i<=11;i++)
{
 printf("player no :%d \nruns  :",i);
 scanf("%d",&n);
 sum = sum+n ;
}
 run_rate =  sum /20.00;
 printf("total runs = %d \n",sum );
 printf("run rate = %f \n" ,run_rate);
 getch();

 }


