#include<stdio.h>
#include<conio.h>
int a[5],top=-1;
int flag=0,i;
void push()
{
	if(top==4)
	{
		cprintf("\n stack is full");
	}
	else
	{
		top++;
		cprintf("\nenter data:");
		scanf("%d",&a[top]);
	}
}
void pop()
{
	if(top!=-1)
	{
		top--;
	}
	else
	{
		cprintf("\nstack is empty");
	}
}
void display()
{
	if(top==-1)
	{
		cprintf("\nstack is empty");
	}
	else
	{
		for(i=top;i>=0;i--)
		{
			cprintf("\n|%d|",a[i]);
		}
	}
	getch();
}
void search()
{
	int se;
	printf("\nenter search element?");
	scanf("%d",&se);
	for(i=top;i>=0;i--)
	{
		if(i==se)
		{
		flag=1;
		break;
		}
	}
	if(flag==1)
	{
		printf("\ndata found");
	}
	else{
		printf("\ndata not found");
	}
}
void main()
{
	int ch;
	clrscr();
	do
	{
		clrscr();
		textcolor(YELLOW);
		textbackground(CYAN);
		cprintf("\r\npress1->push(insert)");
		cprintf("\r\npress2->pop(delete)");
		cprintf("\r\npress3->display");
		cprintf("\r\npress4->search");
	     //	cprintf("\r\npress5->update");
		cprintf("\r\npress0->exit");
		cprintf("\r\nENTER CHOICE::");
		scanf("\r\n%d",&ch);
		switch(ch)
		{
			case 1:push();break;
			case 2:pop();break;
			case 3:display();getch();break;
			case 4:search();getch();break;
	       //		case 5:update();getch();break;
			case 0:exit(0);
		}
	}while(ch!=0);
}