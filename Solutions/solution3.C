#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c=0,d;
	clrscr();
	printf("\n Enter any number:");
	scanf("%d",&a);
	d=a;
	while(a>0)
	{
		b=a%10;
		c=c+b*b*b;
		a=a/10;
	}
	if(d==c)
		printf("\n  armstrong number");
	else
		printf("\n not armstrong number");
	getch();
}