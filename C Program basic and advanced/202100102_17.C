//Merwin Pinto
//202100102
//asst no : 17
//Read name of student and marks of 5 subjects till user enters “END”
#include<stdio.h>
#include <string.h>
void main()
{    
    int i,marks;  
    char str1[20];
    char str2[] = "END"; 
    clrscr();
    while(strcmp(str1,str2)!=0)
    {        
        printf("Enter name of student: ");
        gets(str1);
        for(i=1;i<=5;i++)
        {
            printf("\n");
            printf("Enter marks of subject %d : ",i);
            scanf("%d",&marks);
        }
        
          gets(str1);
         fflush(stdin);   
    }    
 getch();
}