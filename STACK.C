//link list for stack
//operation are
//insert last,delete last,
//delete particular,update,display,search.
#include<stdio.h>
#include<conio.h>

struct linklist
{
	int data;
	struct linklist *prv;
}*start='\0',*end='\0',*temp='\0';

void push()
{
	temp=(struct linklist*)malloc(sizeof(struct linklist));
	printf("\n\t enter data");
	scanf("%d",&temp->data);
	temp->prv=end;
	if(start=='\0')
	{
		start=temp;
	}
	end=temp;
}

void pop()
{
	if(start!='\0')
	{
		temp=end;
		end=end->prv;
		free(temp);
	}
	else if (start==end)
	{
		free(start);
		start='\0';
		end='\0';
		temp='\0';
	}
	else
	{
		printf("\n no data in linklist ");
	}
}

void display()
{
	if (start=='\0')
	{
		printf("\n no data in linklist");
	}
	else{
	for(temp=end;temp!='\0';temp=temp->prv)
	{
		printf("%d->",temp->data);
	}
	}
}
void search()
{
	int s=0;
	if(start=='\0')
		printf("\n no data in linklist");
	else
	{
		printf("\n enter data to search?");
		scanf("%d",&s);
		for(temp=end;temp!='\0'&&temp->data!=s;temp=temp->prv);
		if(temp->data==s)
		{
			printf("\n data found %d ",temp->data);
		}
		else
		{
			printf("\n not found");
		}
	}
}
void main()
{
	int choice;
	clrscr();
	do
	{
		clrscr();
		textcolor(RED);
		textbackground(WHITE);
		cprintf("\r\n press \2  1->push(insert last)");
		cprintf("\r\n press \2  2->pop(delete last)");
		cprintf("\r\n press \2  3->display");
		cprintf("\r\n press \2  4->search");
		cprintf("\r\n press \2  0->exit");
		textcolor(MAGENTA);
		textbackground(CYAN);

		cprintf("\r\n ENTER CHOICE:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:push();break;
			case 2:pop();getch();break;
			case 3:display();getch();break;
			case 4:search();getch();break;
			case 0:exit(0);
		}
	}while(1);
}