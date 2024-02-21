#include<stdio.h>
void main()
{
int i ,price,amt=0;
float disc1,disc2,disc3,disc4,disc5,tp1,tp2,tp3,tp4 ;
clrscr();
for(i=1;i<=5;i++)
{
printf("Grocery item no :%d\nprice of product :",i);
scanf("%d",&price);
amt=amt+price;
}
printf("total amount of grocery purchased is %d\n",amt);
disc1=(amt*0.05);
disc2=(amt*0.1);
disc3=(amt*0.12);
disc4=(amt*0.15);

tp1 =amt-disc1;
tp2 =amt-disc2;
tp3 =amt-disc3;
tp4 =amt-disc4;

if( amt>=1000 && amt < 3000 )
{
printf("\ncongrats you have availed a discount of 5 percent\n");
printf("the total amount with 5 percent discount is :%f\n",tp1);
}

else if (amt>=3000 && amt < 5000 )
{
printf("congrats you have availed a discount of 10 percent\n");
printf("the total amount with 10 percent discount is :%f\n",tp2);
}

else if (amt>=5000 && amt < 7000 )
{
printf("congrats you have availed a discount of 12 percent\n");
printf("the total amount with 12 percent discount is :%f\n",tp3);
}

else if (amt>=10000)
{
printf("congrats you have availed an additional voucher of 1000_Rs with a discount of 15 percent \n");
printf("the amount to be paid is %f\n",tp4);

}
else if (amt>=7000)
{
printf("congrats you have availed a discount of 15 percent\n");
printf("the total amount with 15 percent discount is :%f\n",tp4);
}


getch();
}