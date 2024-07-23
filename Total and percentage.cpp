#include<stdio.h>
#include<conio.h>
int main()
{
int total,maths,chemistry,physics;
float per;
printf("Enter marks of maths,chemistry,and physics: ");
scanf("%d %d %d",&maths,&chemistry,&physics);
total=maths+chemistry+physics;
per=(total*100)/300;
printf("\nTotal marks=%d",total);
printf("\nPercentage=%f",per);
getch();
return 0;
}
    
