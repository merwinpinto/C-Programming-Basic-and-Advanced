//Merwin Pinto
//202100102
//asst no 20
//Write program to read and display names of 5 persons. Separate name, middle name and last name of each person and display.
#include <stdio.h>
#include <string.h>
int main()
{
    char name[50] = "\0";
    char fn[50] = "\0";
    char mn[50] = "\0";
    char ln[50] = "\0";
    int count;
    int i, x, y, z, k = 0;
    clrscr();
    for (k = 1; k <= 5; k++)
    {
      count = x = y = z = 0;
        printf("\n Enter the full name of student %d: ",k);
        gets(name);
        for (i = 0; i < strlen(name) ; i++)
        {
            if (name[i] == 32 )
                count++;
            if (count == 0)
                fn[x++] = name[i];
            if (count == 1)
                mn[y++] = name[i];
            if (count == 2)
            {
                ln[z++] = name[i];
            }
        }
        fn[x] = '\0';
        mn[y] = '\0';
        ln[z] = '\0';
        printf("\n First name of student %d: %s",k, fn);
        if (strlen(fn) == 0)
        {
            printf("\n Last name of student %d: %s",k ,mn);
        }
        else
        {
            printf("\n Middle name of student%d:%s",k,mn);
            printf("\n Last name of student%d:%s",k,ln);
        }
    }
     getch();
}