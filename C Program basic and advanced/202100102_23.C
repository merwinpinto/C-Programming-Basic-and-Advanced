//Merwin Pinto
//202100102
//asst no 23
//Read string from user and display its length

#include<stdio.h>
#include<string.h>
int main()
{
char s, str[30];
clrscr();
printf("Enter a string :");
gets(str);
s=strlen(str);
printf("length of the string is : %d",s);
getch();
}
