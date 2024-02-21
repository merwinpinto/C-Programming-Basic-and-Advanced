#include<stdio.h>
void main()
{

  int lenght , breadth , side , ch;

  float base , height ;
  clrscr();
  printf("To calculate area of triangle press 1 \nTo calculate area of Square press 2 \nto calculate area of rectangle press 3 \n");
  scanf("%d",&ch);

 if (ch == 1)
{
  printf("Area of Triangle\n");
  printf("base : ");
  scanf("%f",&base);
  printf("Height : ");
  scanf("%f",&height);
  printf("0.5 * base * height\n");
  printf("Area of triangle : %f",0.5*base*height);
}

 else if (ch==2)
{
  printf("Area of square\n");
  printf("side :");
  scanf("%d",&side);
  printf("side * side \n");
  printf("area of Square : %d",side*side);
}

 else if (ch==3)

 {
  printf("Area of Rectangle\n");
  printf("lenght :");
  scanf("%d",&lenght);
  printf("breadth :");
  scanf("%d",&breadth);
   printf("length * breadth \n");
  printf("Area of Rectangle : %d",lenght*breadth);
 }

getch();

}



