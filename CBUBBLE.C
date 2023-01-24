#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n;
	char a[10],t;
	clrscr();
	printf("\nhow many element do you want?:");
	scanf("%d",&n);
	n=n+1;
	for(i=0;i<n;i++)
	{
		scanf("%c",&a[i]);
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
		printf("%c",a[i]);
	}
	getch();
}