//Merwin Pinto
//202100102
//asst 22
//Read marks of 5 subjects for 5 students. Ask user the name of student whose marks to be displayed. Display names of students who scored more than 75% and their percentage.
#include<stdio.h>
void main()
{
    float percent[5];
    int i,j,sum,k;
    char name[5][10];
    int marks[5][10];
    //clrscr();
    for ( i = 0; i < 5; i++)
    {
        sum=0;
        printf("Enter information of student %d:\n", i + 1);
        printf("Enter the first name of the Student: ");
        scanf("%s", name[i]);
        for (j = 0; j < 5; j++)
        {
            printf("Enter marks of subject %d: ", j + 1);
            scanf("%d", &marks[i][j]);
        sum+=marks[i][j];
        percent[i]=sum/5;
        }
    }
    printf("Enter 1 for displaying of marks,name and percentage of student 1\n");
    printf("Enter 2 for displaying of marks,name and percentage student 2\n");
    printf("Enter 3 for displaying of marks,name and percentage student 3\n");
    printf("Enter 4 for displaying of marks,name and percentage student 4\n");
    printf("Enter 5 for displaying of marks,name and percentage student 5\n");
    scanf("%d",&k);
    printf("Marks of student%d:\n",k);
    for ( j = 0; j <5; j++)
    {
        printf("marks of subject%d is %d\n",j+1,marks[k-1][j]);
    }
    switch (k)
    {
    case 1:
        
        printf("The first name of the Student no%d: %s ",k,name[k-1]);
        break;
    case 2:
        printf("The first name of the Student no%d: %s ",k,name[k-1]);
        break;
    case 3:
        printf("The first name of the Student no%d: %s ",k,name[k-1]);
        break;
    case 4:
        printf("The first name of the Student no%d: %s ",k,name[k-1]);
        break;
    case 5:
        printf("The first name of the Student no%d: %s ",k,name[k-1]);
        break;
    default:
        printf("Invalid Input");
        break;
    }
    if (percent[k-1]>=75)
    {
        printf("has scored %.2f percentage\n",percent[k-1]);
    }
    else
    {
        printf("has scored less than 75 percentage\n");
    }
    getch();
}