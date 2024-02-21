//Merwin Pinto
//202100102
//asst no 25
//Write program to count number of words in a string
#include<stdio.h>
#include<string.h>
void main()
{
char str[30];
int i=0,totalwords=1;
clrscr();
printf("enter the string :");
gets(str);

while(str[i]!='\0')
{
  if(str[i]== 32 || str[i]== '\n'|| str[i] == '\t')
  {
  totalwords++;
  }
  i++;
}
printf("\n the string is %s \n \nThe total words in the given string  = %d",str,totalwords);
getch();
}
