//Merwin Pinto
//202100102
//asst 30
//Write program to count repetition of character in a string and display a character and its count having maximum repetition.
#include <stdio.h>
#include <string.h>
void main()
{
    char s[50],c;  
    int i,count=0;
    clrscr();
    printf("Enter a string : ");
    gets(s);
    printf("Enter character  to be searched: ");
    c=getchar();
    
    for(i=0;s[i];i++)  
    {
    	if(s[i]==c)
    	{
          count++;
		}
 	}
	printf("character '%c' occurs %d times \n ",c,count);
    getch();
}