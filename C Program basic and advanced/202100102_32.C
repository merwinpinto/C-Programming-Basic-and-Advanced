//Merwin Pinto
//202100102
//Asst no 32
/*Write program to store roll no, name and marks of 5 subjects for 5
 students. Display all the information along with total marks and percentage\
*/
#include <stdio.h>
struct student
{

    char name[50];

    int roll;

    float marks[5];

} s[100];

void main()
{

     FILE *fp;
    fp=fopen("Sample.Txt","w");
    if(fp==NULL)
    {
        printf("Unable to open the file");
    }
    int i, j, n;
    float percentage,total;
    struct student s[100];
    
  //  clrscr();
    for (i = 1; i <= 5; i++)
    {
	total=0;
	printf("\n Enter information of student %d:\n", i);
	printf("Enter name: ");
	scanf("%s", s[i].name);
	printf("Enter roll number: ");
	scanf("%d", &s[i].roll);
	printf("Enter marks :");

	for (j = 0; j < 5; j++)
	{
	    scanf("%f", &s[j].marks[j]);
	    total = total + s[j].marks[j];
	}
	percentage = total / 5.00;
	
	fprintf(fp,"\n %d no. student info\n", i);
	fprintf(fp,"\t Name:%s\n", s[i].name);
	fprintf(fp,"\t Roll number: %d\n", s[i].roll);
	fprintf(fp,"\t Total Marks : %f \n", total);
    fprintf(fp,"\t percentage : %f \n", percentage);
    }
  //getch();
}