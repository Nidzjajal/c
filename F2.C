#include<stdio.h>
#include<conio.h>
void main()
{
	int i,no,temp;
	FILE *fp, *fp2,*fp3;
	fp=fopen("number.txt","w");
		clrscr();
		for(i=0;i<10;i++)
		{
			printf("enter value:");
			scanf("%d",&no);
			fprintf(fp,"%d\n",no);
		}

	fclose(fp);
	fp=fopen("number.txt","r");
	clrscr();
	for(i=0;i<10;i++)
	{
		printf("enter value:");
		fscanf(fp,"%d",&no);
	}
	fp=fopen("number.txt","r");
	fp2=fopen("odd.txt","w");
	fp3=fopen("even.txt","w");
		printf("entered the element:");
		for(i=0;i<10;i++)
		{
			fscanf(fp,"%d",&temp);
			if(temp%2!=0)
				fprintf(fp2,"%d ",temp);
			else
				fprintf(fp3,"%d ",temp);
		}

	fclose(fp);
	fclose(fp2);
	fclose(fp3);
}