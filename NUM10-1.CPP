#include<stdio.h>
#include<conio.h>
int num(int n);
void main()
{
	int n;
	clrscr();
	printf("enter no:");
	scanf("%d",&n);
	num(n);
	getch();

}
int num(int n)
{
	int ans;
	if(n==12)
	{
		return 0;
	}
	ans=n;
	num(n+1);


	printf("\n %d",ans);
	return 0;
	}
