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
		for(j=i;j<n;j++)
		{
			if(a[i]>a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
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