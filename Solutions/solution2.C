#include<stdio.h>
#include<conio.h>
void main()
{
	 int a,b,c=0;
	 clrscr();
	 printf("\n Enter a number to revers :");
	 scanf("%d",&a);
	 while(a>0)
	 {
		b=a%10;
		a=a/10;
		c=c*10+b;

	 }
	 printf("%d",c);
	 getch();
}

