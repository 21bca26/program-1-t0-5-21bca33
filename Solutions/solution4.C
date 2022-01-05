#include<stdio.h>
#include<conio.h>
void main()
{
	int n,c,s=0,r;
	clrscr();
	printf("\n Enter any number :");
	scanf("%d",&n);
	c=n;
	while(n<0)
	{
		r=n%10;
		s=r+s*10;
		n=n/10;
	}
	if(c==s)
		printf("\n palindrom number");
	else
		printf("\n not a palindrome number ");
	getch();
}