//Merwin Pinto
//202100102
//Asst no 38
// Write a program to multiply given number by 2,3,4 and display result using bitwise operator.
#include <stdio.h>
void main()
{
    int n, firstn, num1, num2;
    clrscr();
    printf("Enter an integer : \n");
    scanf("%d", &n);
    firstn = n;
    num1 = n;
    num2 = n;

    num1 = num1 << 1;
    printf("%d x 2 = %d\n", firstn, num1);

    num2 = (num2 << 2) - num2;
    printf("%d x 3 = %d\n", firstn, num2);

     n= n << 2;
    printf("%d x 4 = %d\n", firstn, n);

    getch();
}