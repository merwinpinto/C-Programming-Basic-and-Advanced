//Merwin Pinto
//202100102
//asst no 24
//Write program to count alphabet, numbers and special characters in a string
#include<stdio.h>
#include<string.h>
void main()
{
 char string[50];
 int i,vowels=0,num=0,symbol=0;
 clrscr();
 printf("enter a string :");
 gets(string);
 strlwr(string);
for(i=0;string[i];i++)
{
 if(string[i]=='a' || string[i] =='e'|| string[i] =='i' || string[i] =='o' || string[i]=='u')
  {
  vowels++;
  }
  if(string[i]=='1' || string[i] =='2'|| string[i] =='3' || string[i] =='4' || string[i]=='5'|| string[i]=='6' || string[i] =='7'|| string[i] =='8' || string[i] =='9' || string[i]=='0')
  {
  num++;
  }
  if(string[i]=='!' || string[i] =='@'|| string[i] =='#' || string[i] =='$' || string[i]=='%'|| string[i]=='^' || string[i] =='&'|| string[i] =='*' || string[i] =='(' || string[i]==')')
  {
  symbol++;
  }
}
  printf("No of vowels in given string  : %d \n",vowels);
  printf("No of numbers in given string : %d \n",num);
  printf("No of symbols in given string : %d ",symbol);

getch();
}
