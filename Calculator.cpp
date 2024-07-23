#include <stdio.h>
#include <conio.h>
int main()
{
int n1,n2,result,op,fact=1;
float div;
printf("Select an operator:\n");
printf("Menu:\n1.Addition\n2.substraction\n3.Multiplication\n4.Division\n5.Square\n6.Factorial\n\n");
scanf("%d",&op);
switch(op)
{
case 1:
{
printf("Enter n1 and n2:");
scanf("%d %d",&n1,&n2);
result=n1+n2;
printf("\nAddition=%d",result);
break;
}
case 2:
{
printf("Enter n1 and n2:");
scanf("%d %d",&n1,&n2);
result=n1-n2;
printf("\nsubstraction=%d",result);
break;
}
case 3:
{
printf("Enter n1 and n2:");
scanf("%d %d",&n1,&n2);
result=n1*n2;
printf("\nMultiplication=%d",result);
break;
}
case 4:
{
printf("Enter n1 and n2:");
scanf("%d %d",&n1,&n2);
div=n1/n2;
printf("\nDivision=%f",div);
break;
}
case 5:
{
printf("Enter a number:");
scanf("%d",&n1);
result=n1*n1;
printf("\nSquare=%d",result);
break;
}
case 6:
{
printf("Enter a number:");
scanf("%d",&n1);
while(n1>0)
{
fact=fact*n1;
n1--;
}
printf("\nFactorial=%d",fact);
break;
default:{
printf("Please choose the correct operator");
}
}
return 0;
}
}
