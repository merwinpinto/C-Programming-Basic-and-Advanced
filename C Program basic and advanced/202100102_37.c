//Merwin Pinto
//202100102
//Asst no 37
// Write program to find whether given two numbers are same or not using bitwise operator.
#include<stdio.h>
void main()
{
    int number1,number2,a;
    clrscr();
    printf("Enter 1st number : ");
    scanf("%d",&number1);
    printf("Enter 2nd number : ");
    scanf("%d",&number2);
     a = number1 ^ number2 ;
    if(a==0)
        printf("Equal\n");
    else
        printf("Unequal\n");
    getch();
}