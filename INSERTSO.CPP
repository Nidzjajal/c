#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5],i,j,n;
	clrscr();
	for(i=0;i<5;i++)
	{

		printf("enter no:");
		scanf("%d",&n);
		j=i-1;
		while(n<a[j]&&j>=0)
		{
			a[j+1]=a[j];
			j--;

		}
		a[j+1]=n;
		}
		for(i=0;i<5;i++)
		{
			printf("%d",a[i]);
		}
		getch();


}