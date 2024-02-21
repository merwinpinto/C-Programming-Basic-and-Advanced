//Merwin Pinto
//202100102
//Asst No 34
//Write program to print Fibonacci series using recursion.
//int fibonacci(int);
void main()
{
int n, number= 0, i;
clrscr();
printf("Enter Total terms:");
scanf("%d", &n);
printf("Fibonacci series terms are:");
for(i = 1; i <= n; i++)
{
printf("%d", fibonacci(number));
number++;
}
getch();
}

int fibonacci(int n)
{
if(n == 0 || n == 1)
return n;
else
return(fibonacci(n-1) + fibonacci(n-2));
}