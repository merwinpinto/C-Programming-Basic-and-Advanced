//Merwin Pinto
//202100102
//asst no 26
//Write program to get string from user and copy it to other variable in reverse and print
#include<stdio.h>
#include<string.h>
void main()
{
char str1[30],str2[30];
clrscr();
printf("enter a string :");
gets(str1);
strrev(str1);
strcpy(str2,str1);
printf("String reversed and copied to second variable  : %s",str2);
getch();
}