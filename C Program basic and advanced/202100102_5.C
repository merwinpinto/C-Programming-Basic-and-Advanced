#include<stdio.h>
void main()
{
int i,price1,price2,price3,price4,price5;
float disc1,disc2,disc3,disc4,disc5,tp1,tp2,tp3,tp4,tp5,sum=0;
clrscr();
printf("The 5 grocery item rates are as follows:\n");
scanf("%d%d%d%d%d",&price1,&price2,&price3,&price4,&price5);

 disc1 = price1*2/100;
 disc2 = price2*3/100;
 disc3 = price3*5/100;
 disc4 = price4*7/100;
 disc5 = price5*10/100;

 tp1 =price1-disc1;
 tp2 =price2-disc2;
 tp3 =price3-disc3;
 tp4 =price4-disc4;
 tp5 =price5-disc5;

 sum=sum+tp1+tp2+tp3+tp4+tp5;

printf("price of product after discount\n");
 printf("(2percentdisc) price of product 1 is :%f\n",tp1);
 printf("(3percentdisc) price of product 2 is :%f\n",tp2);
 printf("(5percentdisc) price of product 3 is :%f\n",tp3);
 printf("(7percentdisc) price of product 4 is :%f\n",tp4);
 printf("(10percentdisc) price of product 5 is :%f\n",tp5);
 printf("total price to be paid by customer (RS) :%f",sum);

 getch();
 }






