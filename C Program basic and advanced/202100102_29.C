//Merwin Pinto
//202100102
//asst no 29
//Write program to copy string from one array to another.
#include<stdio.h>
#include<string.h>
void main()
{
 char string[30];
 int i,vowels=0;
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
}
  printf("No of vowels in given string : %d \n",vowels);

getch();
}


