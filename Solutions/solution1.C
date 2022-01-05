/* write a program to print sum 1 to 5 digit.
date:16/12/2021*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a=1,sum=0;
	clrscr();
	while(a<=5);
	{
	       //	printf("\n %d",a);
		a=a+1;
		sum=sum+a;
		printf("\n sum of1 to 5 number is %d ",sum);
	}
	getch();
}

