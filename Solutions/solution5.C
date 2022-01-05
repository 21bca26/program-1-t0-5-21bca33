#include<stdio.h>
#include<conio.h>
void main ()
{
	int no,i,c=0;
	clrscr();
	printf("\n Enter a value:\n\t");
	scanf("%d",&no);
	i=2;
	while(i<no)
	{
		if(no%i==0)
		{
			c=1;

		}
		i=i+1;
		if(c==1)
			printf(" This no is not primre number");
		else
			printf("  This no is prime number");
	 }
	 getch();
}