#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n,a[10],t,x;
	clrscr();
	printf("\nhow many element do you want?:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&x);
		j=i+1;
		while(x<a[j] && j>=0)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=x;
	}
	printf("sorted element\n");
	for(i=0;i<n;i++)
	{
		printf("%d",x);
	}
	getch();
}