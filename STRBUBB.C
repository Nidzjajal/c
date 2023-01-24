#include<stdio.h>
#include<conio.h>
void main()
{
	char a[5][6],temp;
	int i,j,n;
	clrscr();
	for(i=0;i<5;i++)
	{
		scanf("%s",a[i]);
	}
	for(i=0;i<5-1;i++)
	{
		for(j=0;j<5-i-1;j++)
		{
			if(strcmp(a[j],a[j+1])>0)
			{
				strcpy(temp,a[j]);
				strcpy(a[j],a[j+1]);
				strcpy(a[j+1],temp);
			}
		}
	}
	printf("sorting the numbers\n");
	for(i=0;i<5;i++)
	{
		printf("%s\n",a[i]);
	}
	getch();
}