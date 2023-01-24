#include<stdio.h>
#include<conio.h>
void main()
{
	int no,i,temp;
	FILE *fp;
	fp=fopen("try.txt","w");
		clrscr();
		for(i=0;i<10;i++)
		{
			printf("enter number:");
			scanf("%d",&no);
			fprintf(fp,"%d ",no);
		}
	fclose(fp);
	fp=fopen("try.txt","r");
		clrscr();
		printf("value=");
		for(i=0;i<10;i++)
		{
			fscanf(fp,"%d ",&temp);
			printf("\n\t\t%d ", temp );
		}


	fclose(fp);
	getch();
}