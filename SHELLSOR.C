#include<stdio.h>
#include<conio.h>

void main()
{
	int a[5],i,j,k,temp,n;
	clrscr();
	printf("how many element?");
	scanf("%d",&n);
	for(k=0;k<n;k++)
	{

		scanf("%d",&a[k]);
	}
	for(i=n/2;i>0;i=i/2)
	{
		for(j=i;j<n;j++)
		{
			for(k=j-i;k>=0;k=k-1)
			{
				if(a[k+i]>=a[k])
					break;
				else
				{
					temp=a[k];
					a[k]=a[k+i];
					a[k+i]=temp;
				}

			}
		}
	}
	 for(k=0;k<n;k++)
	{
	      printf("\n%d\n",a[k]);
	}
	 getch();


}
