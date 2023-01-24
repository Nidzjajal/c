#include<stdio.h>
#include<conio.h>
struct link
{
	int data;
	struct link *next;
}*start='\0',*end='\0',*temp='\0';
int flag=0,se;
void enqueue()
{
	temp=(struct link*)malloc(sizeof(struct link));
	printf("enterany number");scanf("%d",&temp->data);
	temp->next='\0';
	if(start=='\0')
		start=temp;
	else
		end->next=temp;
	end=temp;
}

void dequeue()
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
void update()
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
		printf("%d\n",temp->data);

	}
}
void main()
{
	int choice;
	clrscr();

	do
	{
		clrscr();
		printf("\npress-\n1->enqueue(insert last)\n2->dequeue(delete first)\n3->display\n4->search\n5->update\n0->exit");
		printf("\n enter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				enqueue();
				getch();
				break;


			case 2:
				dequeue();
				getch();
				break;
			case 3:
				display();
				getch();
				break;
			case 4:
				search();
				getch();
				break;
			case 5:
				update();
				getch();
				break;
			case 0:
				exit(0);

		}
	}while(1);
}
