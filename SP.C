#include<stdio.h>
#include<conio.h>

void main()

{
	int sa[4][4],i=0,k=0,j,x;
	clrscr();
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			scanf("%d",&x);
			if(x!=0)
			{
				sa[k][0]=i;
				sa[k][1]=j;
				sa[k][2]=x;
				k++;
			}
		}
	 }
	k=0;
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
		       if(sa[k][0]==i && sa[k][1]==j)
		       {
				printf(" %d ",sa[k][2]);
				k++;
		       }
		       else
		       {
				printf(" 0 ");
		       }


		}
		printf("\n");
	}

	getch();
}