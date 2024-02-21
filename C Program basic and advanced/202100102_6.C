#include <stdio.h>
void main()
{
int phy,chem,math,bio,comp,sum;
char name;
float percent;
clrscr();
printf("name of student :");
scanf("%s",&name);
printf("marks of physics :");
scanf("%d",&phy);
printf("marks of chemistry :");
scanf("%d",&chem);
printf("marks of maths :");
scanf("%d",&math);
printf("marks of biology :");
scanf("%d",&bio);
printf("marks of computer :");
scanf("%d",&comp);
sum = phy+chem+math+bio+comp;
printf("sum of marks = %d\n",sum);
percent = sum / 5;
printf("total percent =%f\n",percent);
if(percent<= 45)
{
printf("Fail");
}
else if(percent>=45 && percent<60)
{
printf("Second Class");
}
else if ( percent>=60 && percent<75)
{
printf("First Class");
}
else if ( percent== 100 )
{
printf("Gold Medalist");
}
else //if (percent>=75 )
{
printf("Distiction ");
}
getch();
}

getch();
}