#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10],t,i,j,n;
	clrscr();
	printf("\nhow many element do you want?:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nenter element:");
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	printf("sorted element\n");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	getch();
}