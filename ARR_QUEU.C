#include<stdio.h>
#include<conio.h>
int arr[5],rear=-1, front=-1;
int flag=0,i;
void enqueue()
{
	if(rear<4)
	{
		rear++;
		if(front==-1)
			front++;
		printf("\nenter element->");
		scanf("%d ",&arr[rear]);
	}
	else
	{
		printf("\nqueue is full");
	}
}
void dequeue()
{
	if(rear==-1)
	{
		printf("\n queue is empty ");
	}
	else
	{
		if(front<=rear)
		{
			if(front==rear)
				front=rear=-1;
			else
			{
				front++;
				printf("\n data deleted from queue");
			}
		}
		else
		{
			printf("\n all data is deleted");
		}
}
}
void display()
{
	if(front==-1)
	{
		printf("\n queue is empty");
	}
	else
	{
		for(i=front;i<=rear;i++)
		{
			printf("\n%d",arr[i]);
		}
	}
	getch();
}
void search()
{
	int s;
	printf("\n which element do you search?");
	scanf("%d",&s);
	for(i=front;i<arr[rear];i++)
	{
		if(arr[rear]==s)
		{
			printf(" %d found",arr[rear]);
			flag=1;
			break;
		}

	}
	if(flag==0)
	{
		printf("\n data not found");
	}
}
void update()
{

	search();
	if(flag==1)
	{

		for(i=front;i<arr[rear];i++)
		{
			scanf("%d",&arr[rear]);
		}
}
}
void main()
{
	char ch;
	do
	{
		clrscr();
		printf("\npress a->enqueue(insert)");
		printf("\npress b->dequeue(delete)");
		printf("\npress c->display");
		printf("\npress d->search");
		printf("\npress e->update");
		printf("\nENTER CHOICE->");
		ch=getch();
		switch(ch)
		{
			case 'a':enqueue();break;
			case 'b':dequeue();break;
			case 'c':display();getch();break;
			case 'd':search();getch();break;
			case 'e':update();getch();break;
			case 'x':exit(0);
		}
	}while(ch!='x');
}