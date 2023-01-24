#include<stdio.h>
#include<conio.h>
void no(int i)
{
	if(i<9)
	{
		i++;
		no(i);

	printf("%d",i);
	}
}
void main()
{

int i=0;
clrscr();
 no(i);
 getch();
}