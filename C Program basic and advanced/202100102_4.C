#include<stdio.h>
#include<math.h>
void main()
{
float pamt,rate,n,SI,CI;
clrscr();
printf("the Principal amount :");
scanf("%f",&pamt);
printf("the Rate of Interest :");
scanf("%f",&rate);
printf("No of years :");
scanf("%f",&n);

SI =(pamt*rate*n)/100.00 ;
CI = pamt*pow( 1+ (rate / 100.00),n) - pamt ;

printf(" simple interest calculated is : %f \n",SI);
printf(" compound interest calculated is : %f",CI);
getch();
}
