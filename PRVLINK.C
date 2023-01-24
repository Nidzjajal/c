//link list using previous node
//operation are
//insert last,insert first,delete last,delete first,insert betwen(before),
//delete particular,update,display,search.
#include<stdio.h>
#include<conio.h>

struct linklistp
{
	int data;
	struct linklistp *prv;
}*start='\0',*end='\0',*temp='\0';

void inlast()
{
	temp=(struct linklistp*)malloc(sizeof(struct linklistp));
	printf("\n\t enter data");
	scanf("%d",&temp->data);
	temp->prv=end;
	if(start=='\0')
	{
		start=temp;
	}
	end=temp;
}
void infirst()
{
	temp=(struct linklistp*)malloc(sizeof(struct linklistp));
	printf("\nt enter data");
	scanf("%d",&temp->data);
	temp->prv='\0';
	if(end=='\0')
		end=temp;
	else
	{
		start->prv=temp;
	}
	start=temp;
}
void dellast()
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
delfirst()
{
	if(start=='\0')
	{
		printf("\n no data in linklist");

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
		for(temp=end;temp->prv->prv!='\0';temp=temp->prv);
		free(temp->prv);
		temp->prv='\0';
		start=temp;
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
		printf("\n press 1->insert last");
		printf("\n press 2->insert first");
		printf("\n press 3->delete last");
		printf("\n press 4->delete first");
		printf("\n press 5->display");
		printf("\n press 6->search");
		printf("\n press 0->exit");
		printf("\n ENTER CHOICE:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:inlast();break;
			case 2:infirst();break;
			case 3:dellast();getch();break;
			case 4:delfirst();getch();break;
			case 5:display();getch();break;
			case 6:search();getch();break;
			case 0:exit(0);
		}
	}while(1);
}