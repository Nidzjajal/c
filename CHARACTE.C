#include<stdio.h>
#include<conio.h>
#include<process.h>
# define cln fflush(stdin)

void create();
void insertlast();
void insertfirst();
void insertbetwen();
void display();
void search();
void edit();
void deletelast();
void deletefirst();
void deletespecific();

struct linklist
{
	char data;
	struct linklist *next;
};
struct linklist*first,*temp,*newnode;
int flag=0;
void main()
{
	int choice;
	do
	{
		clrscr();
		printf("\n press1:create\n\t2:insert first\n\t3:insert last\n\t4:insertbetwen\n\t5:display\n\t6:search\n\t7:edit\n\t8:deletelast\n\t9:deletefirst\n\t10:deletespecific\n\t0:exit\n\t");
		printf("\n enter your choice:");
		scanf("%d",&choice);

		switch(choice)
		{
			case 1:
				create();
				getch();
				break;
			case 2:
				insertfirst();
				getch();
				break;
			case 3:
				insertlast();
				getch();
				break;
			case 4:
				insertbetwen();
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
			case 8:
				deletelast();
				getch();
				break;
			case 9:
				deletefirst();
				getch();
				break;
			case 10:
				deletespecific();
				getch();
				break;
			case 0:
				getch();
				exit(0);
			default:
				printf("\n please ent proper choice:");
				break;
		}
	}while(1);
}
void create()
{
	int i,noe;
	struct linklist *newnode;
	clrscr();
	printf("\n how many ele:");
	scanf("%d",&noe);
	for(i=0;i<noe;i++)
	{
		newnode=(struct linklist*)malloc (sizeof(struct linklist*));
		printf("\n ent ele:"); cln;
		scanf("%c",&newnode->data);
		newnode->next=NULL;
		if(first==NULL)
		{
			first=newnode;
		}
		else
		{
			for(temp=first;temp->next!=NULL;temp=temp->next)
			{
				;
			}
			temp->next=newnode;
		}
	}
}


void insertlast()
{
	newnode=(struct linklist *)malloc(sizeof(struct linklist *));
	printf("\n enter element");cln;
	scanf("%c",&newnode->data);
	newnode ->next=NULL;
	if(first==NULL)
	{
		first=newnode;
		return;
	}
	for(temp=first;temp->next!=NULL;temp=temp->next)
	{
		;//do nothing
	}
	temp->next=newnode;
}
void insertfirst()
{
	newnode=(struct linklist *)malloc(sizeof(struct linklist *));
	printf("\n which element do you insert?");cln;
	scanf("%c",&newnode->data);

	newnode->next=first;
	first=newnode;
}
void insertbetwen()
{
		 clrscr();
		search();
		if(flag==1)
		{
			newnode=(struct linklist *)malloc(sizeof(struct linklist *));
			printf("\n enter new element :");cln;
			scanf("%c",&newnode->data);
			newnode->next=temp->next;
			temp->next=newnode;

		}

}
void display()
{
	clrscr();
	printf("\n display all records\n");


	for(temp=first;temp!=NULL;temp=temp->next)
	{
	    cln;	printf("%c->",temp->data);
	}
	printf("NULL");
}
void search()
{
	int se;
	printf("\n which element u want to search?");
	cln;
	scanf("%c",&se);
	for(temp=first;temp!=NULL;temp=temp->next)
	{
		if(se==temp->data)
		{
			printf("\n found");
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		printf("not found");

	}
}
void edit()
{
	clrscr();
	search();
	if(flag==1)
	{
		printf("\n enter value you want to change:");cln;
		scanf("%c",&temp->data);
	}
}
void deletelast()
{
	if(first==NULL)//empty list
	{
		printf("\n list is empty");
		return;
	}
	else if(first->next==NULL)//only one element
	{
		printf("%d is free",first->data);
		free(first);
		first=NULL;
		return;

	}
	else    //multiple element
	{
		for(temp=first;temp->next->next!=NULL;temp=temp->next)
		{
			;// do nothing
		}
			cln;
		printf("%c is free",temp->next->data);
		free(temp->next->next);
		temp->next=NULL;
		return;

	}
}
void deletefirst()
{
	if(first!=NULL)
	{
		temp=first;
		first=first->next;
		free(temp);
		printf("\n element is deleted");
	}
	else
	{
		printf("\n list is empty");

	}
}
void deletespecific()
{
	int de=0;
	struct linklist *dummy =NULL;
	if(first==NULL)//list is empty
	{
		printf("\n list is empty");
		return;
	}
	printf("\n which element you want to delete?");cln;
	scanf("%c",&de);
	if(first->data==de)//1 element is deleted
	{
		deletefirst();
		return;
	}
	for(temp=first;temp!=NULL;temp=temp->next)
	{
		if(de==temp->next->data)
		{
			printf("found");
			flag=1;
			dummy=temp->next;
			temp->next=dummy->next;cln;
			printf("%c is deleted",dummy->data);
			free(dummy);
		}
	}
	if(flag==0)
	{
		printf("not found");
	}

}