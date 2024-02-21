// 1.Row wise addition
//2. Print Maximum
#include<stdio.h>
void main()
{
    int i,j,n,m,value;
    int sum=0;
    int **p;
    
    printf("Enter No of students : ");
    scanf("%d",&n);
    
    printf("Enter No of subjects : ");
    scanf("%d",&m);
    
    p = (int**)malloc(sizeof(int *)*n);
    
for(i=0;i<n;i++)
{
    *(p+i)=(int*)malloc(sizeof(int*)*m);
        
}
    
for(i=0;i<n;i++)
{
    for(j=0;j<m;j++)
    {
        printf("Enter Values :");
        scanf("%d",*(p+i)+j);
    }
}

printf("\n The output \n \n");

for(i=0;i<n;i++)
{
    printf("Marks For student %d are \n",i+1);
    for(j=0;j<m;j++)
    { 
        printf("subject %d = ",j+1);
        printf("%d",*(*(p+i)+j) );
        printf("\t");
    }
        printf("\n \n");

for (i=0 ; i<n ; i++) 
{
    for (j=0 ; j<m ; j++) 
    {
      sum = sum + ;
    }
    
    printf ("Total Marks obtained by student %d = %d marks \n" ,i+1,sum);
}
    
}
    //getch();
}