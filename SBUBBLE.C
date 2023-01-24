#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n;
	char a[10][10],t;
	clrscr();
	printf("\nhow many element do you want?:");
	scanf("%d",&n);
	n=n+1;
	for(i=0;i<n;i++)
	{
		scanf("%s",a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(strcmp(a[j],a[j+1])>0)
			{
				strcpy(t,a[j]);
				strcpy(a[j],a[j+1]);
				strcpy(a[j+1],t);
			}
		}
	}
	printf("sorted element\n");
	for(i=0;i<n;i++)
	{
		printf("%s\n",a[i]);
	}
	getch();
}