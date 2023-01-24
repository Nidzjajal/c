/*
      doubly linklist........

*/


#include<stdio.h>
#include<conio.h>

struct linkd
{
	int data;
	struct linkd*prv;
	struct linkd*next;

}*start='\0',*end='\0',*temp='\0';

void inlast()
{
	temp=(struct linkd *)malloc(sizeof(struct linkd));
	printf("\nEnter last element:");
	scanf("%d",&temp->data);
	temp->next='\0';
	temp->prv=end;
	if(start=='\0')
	{
		start=temp;
	}
	else
	{
		end->next=temp;

	}
	end=temp;
}
void infirst()
{
	temp=(struct linkd*)malloc(sizeof(struct linkd));
	printf("\n enter the first element:");
	scanf("%d",&temp->data);
	temp->next=start;
	temp->prv='\0';
	if(start!='\0')
		start->prv=temp;
	else
		end=temp;
	start=temp;
}
void dellast()
{
	if(start=='\0')
		printf("\n no data in linklist");
	else if(start==end)
	{
		free(start);
		start='\0';
		end='\0';
		temp='\0';
	}
	else
	{
		temp=end;
		end=end->prv;
		free(temp);
		end->next='\0';
	}
}

void delfirst()
{
	if(start=='\0')
		printf("\n no data in linklist ");
	else if(start==end)
	{
		free(start);
		start='\0';
		end='\0';
		temp='\0';
	}
	else
	{
		temp=start;
		start=start->next;
		free(temp);
		start->prv='\0';
	}
}

/*&void search()
{
	int s;
	printf("\n Which element d you want to search?:");
	scanf("%d",s);
	if(temp->data==s)
	{
		printf("\n %d data is found",temp->data);
	}
	else
	{
		printf("\n %d data is not found",s);
	}
}                              */
void display()
{
	if (start=='\0')
		printf("\nno data in linklist");
	else
	{
	    for(temp=end;temp!='\0';temp=temp->prv)
	    {
		printf("%d\n",temp->data);
	    }
	}
}
void inbetwen()
{
	int se;
	struct linkd*x;
	printf("\n enter data to search?:");
	scanf("%d",&se);
	for(temp=start;temp->next->data!=se&&temp!='\0';temp=temp->next);
	if(temp->next->data==se)
	{
		x=(struct linkd*)malloc(sizeof(struct linkd));
		printf("\n enter data");
		scanf("%d",&x->data);
		x->next=temp->next;
		x->prv=temp;
		temp->next=x;
		x->next->prv=x;
	}
}
void delparticular()
{       int se;
	struct linkd*x;
	printf("\n enter data to search?:");
	scanf("%d",&se);
	for(temp=start;temp->next->data!=se&&temp!='\0';temp=temp->next);
	if(temp->next->data==se)
	{
		printf("\n %d delete",temp->next->data);
		x=temp->next;
		temp->next=x->next;
		temp->next->prv=temp;
		free(x);

	     //	x->next=temp->next;
	     //	x->prv=temp;
	    //	temp->next=x;
	    //	x->next->prv=x;
	}
}
void main()
{
	char ch;
	do
	{
		printf("\n press a->insert last");
		printf("\n press b->insert first");
		printf("\n press c->delete last");
		printf("\n press d->insert first");
		printf("\n press e->insert betwen");
		printf("\n press g->display");
		printf("\n press h->delete paricular");
		printf("\n press x->exit");
		printf("\n ENTER CHOICE:");
		ch=getch();
		switch(ch)
		{
			case 'a':inlast();
				break;
			case 'b':infirst();
				break;
			case 'c':dellast();
				getch();
				break;
			case 'd':delfirst();
				getch();
				break;
			case 'e':inbetwen();
				getch();
				break;
			case 'g':display();
				getch();
				break;
			case 'h':delparticular();
				getch();
				break;
			case 'x':exit(0);

		}

	}while(1);
}