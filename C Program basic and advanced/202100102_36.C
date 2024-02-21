//Merwin Pinto
//202100102
//Asst no 36
// Write program to read number from user and display whether it is odd or even using bitwise operator.
#include<stdio.h>
void main()
{
    int number,a;
    clrscr();
    printf("Enter any number : ");
    scanf("%d",&number);
     a = number & 1;
    if(a)
        printf("The number is %d and is odd \n",number);
    else
        printf("The number is %d and is even \n",number);
    getch();
}