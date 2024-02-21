//Merwin Pinto
//202100102
//asst no 28
//Write program to copy string from one array to another.
#include<stdio.h>
#include<string.h>
void main()
{
 char s1[30],s2[30] ;
 clrscr();
 printf("enter the string :");
 gets(s1);
 strcpy(s2,s1);
 printf("Displaying array no.1 : %s \n",s1);
 printf("Displaying array no.2 : %s ",s2);
 getch();
}