#include<stdio.h>
#include<conio.h>
void main()
{
	char a[10],temp;
	int i,j,n;
	clrscr();
	printf("enter no:");
	scanf("%d",&n);
	n=n+1;
	for(i=0;i<n;i++)
	{
		scanf("%c",&a[i]);
		while(n<a[j]&&j>=0)
		{
			a[j+1]=a[j];
			j++;

		}
		a[j+1]=n;

		printf("sorting the numbers");
		for(i=0;i<n;i++)
		{
			printf("%c",a[i]);
		}
		getch();
}       }