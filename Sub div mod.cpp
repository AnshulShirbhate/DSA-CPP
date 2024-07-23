#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,sub,div,mod;
printf("Enter values for a and b:-");
scanf("%d %d",&a,&b);
sub=a-b;
div=a/b;
mod=a%b;
printf("\nsubstraction=%d",sub);
printf("\ndivision=%d",div);
printf("\nmodulus=%d",mod);
getch();
return 0;
}
