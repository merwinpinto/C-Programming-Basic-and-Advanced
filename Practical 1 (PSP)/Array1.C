//Merwin Pinto
//202100102
//PSP practical 1 asst 1
//Program 1 : to store students marks in an array .
#include<stdio.h>
void main() 
{
int i,j,m,n,sum;
int a[10][10],max[10];

printf ("Students and Marks Report : \n ");

printf("Enter No of students : ");
scanf("%d",&n);
 
printf("Enter No of subjects : ");
scanf("%d",&m);
printf("\n");
 
for (i=0;i<n;i++) 
 {
   printf("Marks For student %d \n",i+1);
    for (j=0;j<m;j++)
   {
      
    printf("Subject %d \n",j+1);
    printf("Enter Marks :");
    scanf ("%d",&a[i][j]);
   }
    printf("\n");
 }
    printf("\n Marks of Student are : \n");
    
for (i=0;i<n;i++) 
{
    printf("Marks For student %d are \n",i+1);
    
    for(j=0;j<m;j++) 
    {
        printf("subject %d = ",j+1);
      printf("%d",a[i][j]);
      printf("\t");
    }
      printf("\n \n");
}  

    printf("total marks of student \n",sum);

for (i=0 ; i<n ; i++) 
{
    sum=0;
    for (j=0 ; j<m ; j++) 
    {
      sum=sum+a[i][j];
    }
    printf ("Total Sum of marks obtained by student %d = %d marks \n" ,i+1,sum);
}

    printf("\n");
for (i = 0; i < n; i++)
{  
    max[i] = a[i][j];
    
    for (j = 0; j < m; j++)
	{
	    
	  if (a[i][j] > max[i])
	  {
	     max[i] = a[i][j];
	  }
	  
	}
    
}
  printf("The maximum marks of Student are as follows \n");
  
    for (i = 0; i < n; i++)
    {
        printf ("Maximum Marks of the Student %d = %d marks \n", i+1, max[i]);
    }

}