//Merwin Pinto
//202100102
//Asst no 35
/* Write program to read 5 numbers from user. Write a function to read these 5 numbers and
calculate total in another function and display total in the same function in which values are read.*/
#include<stdio.h>
void main() 
{
    int i,number[5],total=0;
    clrscr();
    for (i = 0; i<5; i++)
    {
        printf("Enter No. %d : ",i+1);
        scanf("%d",&number[i]);
    }
    total=sum(number);
    printf("Total : %d",total);\
    getch();
}
int sum(int no[])
{
    int total=0,i;
    for (i=0;i<5;i++)
    {
        total += no[i];
    }
    return total;
}