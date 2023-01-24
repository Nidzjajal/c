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
		for(j=i;j<n;j++)
		{
			if(strcmp(a[i],a[j])>0)
			{
				strcpy(t,a[i]);
				strcpy(a[i],a[j]);
				strcpy(a[j],t);
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