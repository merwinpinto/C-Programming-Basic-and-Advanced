//Merwin Pinto
//202100102
//asst no 27
//Write program to read string from user and convert all characters to upper case and then display that string.
#include<stdio.h>
#include<string.h>
void main()
{
char string[30];
clrscr();
printf("enter a string : ");
gets(string);
strupr(string);
printf("enter upper case letters : %s",string);
getch();
}