//Merwin Pinto
//202100102
//div c
//asst no 19
//make 2 different matrix to add , sub and multiply.
#include<stdio.h>
void main()
 {
    int a[2][2], b[2][2], c[2][2],i,j,k,sum=0;
    int ch;
    clrscr();
    printf("enter first matrix : \n");
    for ( i=0 ; i<2 ;i++)
    { 
        for(j=0 ;j<2 ; j++)
      {
          scanf("%d",&a[i][j]);
      }  
    }
    printf("\n enter second matrix : \n");
    for ( i=0 ; i<2 ;i++)
    { 
        for(j=0 ;j<2 ; j++)
      {
          scanf("%d",&b[i][j]);
      }  
    }
    
    printf("press 1 for adding matrix \n press 2 for substractng the matrix \n press 3 for multiplying matrix \n");
    scanf("%d",&ch);
   
if(ch==1)
{
        printf("Matrix addition :");
        printf("\nMatrix addition result of the two given Matrix is: \n");
    for ( i=0 ; i<2 ;i++)
    { 
        for(j=0 ;j<2 ; j++)
      {
        c[i][j] = a[i][j] + b[i][j]; 
           printf(" %d \t",c[i][j]);
      }
     printf("\n");
    }
}
    
    
    
if(ch==2)
{  
    printf("\n matrix substraction :\n");
    printf("\nmatrix substraction result of the two given Matrix is: \n");
    for ( i=0 ; i<2 ;i++)
    { 
        for(j=0 ;j<2 ; j++)
      {
        c[i][j] = a[i][j] - b[i][j]; 
           printf(" %d \t",c[i][j]);
      }
     printf("\n");
    }
}


if(ch==3)
{
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            sum=0;
            for(k=0; k<2; k++)
                sum = sum + a[i][k] * b[k][j];
                c[i][j] = sum;
        }
    }
    printf("\nmatrix Multiplication result of the two given Matrix is: \n");
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
            printf("%d\t", c[i][j]);
        printf("\n");
    }
   
}
 getch();
 }