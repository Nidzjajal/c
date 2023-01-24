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
		for(j=i;j<5;j++)
		{
			if(strcmp(a[i],a[j])>0)
			{
				strcpy(temp,a[i]);
				strcpy(a[i],a[j]);
				strcpy(a[j],temp);
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