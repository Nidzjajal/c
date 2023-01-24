#include<stdio.h>
#include<conio.h>
struct bhuro
{
	int data;
	struct bhuro *next;
}*start='\0',*end='\0',*temp='\0';
int flag=0,se;
void inlast()
{
	temp=(struct bhuro*)malloc(sizeof(struct bhuro));
	printf("enterany number");scanf("%d",&temp->data);
	temp->next='\0';
	if(start=='\0')
		start=temp;
	else
		end->next=temp;
	end=temp;
}
void infirst()
{
	temp=(struct bhuro*)malloc(sizeof(struct bhuro));
	printf("enter for first element");
	scanf("%d",&temp->data);
	temp->next=start;
	if(end=='\0')
	{
		end=temp;
	}
	start=temp;
}
void delfirst()
{
	if(start=='\0')
	{
		printf("\nlist is empty");

	}
	else
	{
		temp=start;
		start=start->next;
		free(temp);
	}
}
void dellast()

{
       if(start=='\0')
       {
		printf("list is empty");
       }
       else if(start==end)
	{
		free(start);
		start='\0';
		end='\0';
		temp='\0';
	}
	else
	{
	for(temp=start;temp->next->next!='\0';temp=temp->next);
	free(temp->next);
	temp->next='\0';
	end=temp;
	}
}
void search()
{
	printf("which element you want to search?");
	scanf("%d",&se);
	for(temp=start;temp!='\0';temp=temp->next)
	{
		if(se==temp->data)
		{
			printf("%d ",temp->data);
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		printf("not found");
	}
	else
	{
		printf("found");
	}
}
void edit()
{
	search();
	if(flag==1)
	{
		printf("\n enter element you want to edit");
		scanf("%d",&temp->data);
	}
}
void display()
{
	for(temp=start;temp!='\0';temp=temp->next)
	{
		printf("[%u]%d[%u]\n",temp,temp->data,temp->next);
5
	}
}
void main()
{
	int choice;
	clrscr();

	do
	{
		clrscr();
		printf("\npress-\n1->insert last\n2->insert first\n3->delete last\n4->delete first\n5->display\n6->search\n7->edit\n0->exit");
		printf("\n enter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				inlast();
				getch();
				break;
			case 2:
				infirst();
				getch();
				break;
			case 3:
				dellast();
				getch();
				break;
			case 4:
				delfirst();
				getch();
				break;
			case 5:
				display();
				getch();
				break;
			case 6:
				search();
				getch();
				break;
			case 7:
				edit();
				getch();
				break;
			case 0:
				exit(0);

		}
	}while(1);
}
