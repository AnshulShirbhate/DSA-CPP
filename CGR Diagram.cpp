#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<dos.h>
using namespace std;
void main()
{
	int gd=DETECT,gm;
	intigraph(&gd,&gm,"C:TurboC3\\BGI");
	rectangle(20,180,200,240);
	rectangle(40,40,180,120);
	rectangle(80,60,140,100);
	line(60,80,100,120);
	line(160,180,120,120);
	getch();
}
