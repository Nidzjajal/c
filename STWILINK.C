#include<stdio.h>
#include<conio.h>

struct node
{
	int no;
	struct  node * next;

};

struct node * top=NULL;

void push()
{

	struct node* temp;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("\n enter the no :- ");
	scanf("%d",&temp->no);
	printf("\n\t\t 😊SAVE DATA ");
	getch();

	temp->next=top;
	top=temp;


}

void pop()
{
	struct node* temp;
	if(top==NULL)
		printf("\n empty ");
	else
	{
		top=top->next;
		free(temp);

	}



}

void disp()
{
	struct node* temp;

	if(top==NULL)
		printf("\n enter the data please :");
	else
	{
		for(temp=top;temp!=NULL;temp=temp->next)
		{
			printf("\n_____");
			printf("\n %d  |",temp->no);

		}

	}

}

void peep()
{
	struct node*temp;
	int flag=0;
	int n;

	printf("\n enter the search element :- ");
	scanf("%d",&n);

	for(temp=top;temp!=NULL;temp=temp->next)
	{
		if(n==temp->no)
		{
			flag=1;
			break;
		}


	}
	if(flag==1)
	{

		printf("\n this element is found");

	}
	else                   		printf("\n this element is not found");




}

void sort()
{
	int n;
	struct node * t1,*t2;

	for(t1=top;t1!=NULL;t1=t1->next)
	{
		for(t2=top;t2!=NULL;t2=t2->next)
		{
		    if(t1->no<t2->no)
		    {
			n=t1->no;
			t1->no=t2->no;
			t2->no=n;

		    }


		}

	}



}

void main()
{
	int ch;
	clrscr();

	do{
		textcolor(BLACK+BLINK);textbackground(WHITE);
		gotoxy(25,2);cprintf("\n\t\t\t----------MAIN MANU------------");
		textbackground(CYAN);textcolor(RED);
		gotoxy(25,3);cprintf("\n enter 1 to push :- ");
		gotoxy(25,4);cprintf("\n enter 2 to pop :- ");
		gotoxy(25,5);cprintf("\n enter 3 to disp :- ");
		gotoxy(25,6);cprintf("\n enter 4 to peep :- ");
		gotoxy(25,7);cprintf("\n enter 5 to sort :- ");
		gotoxy(25,8);cprintf("\n enter 0 to exit");
		gotoxy(25,9);cprintf("\n -----------------------------");

		gotoxy(25,10);cprintf("\n enter your choice :- ");
		scanf("%d",&ch);

		switch(ch)
		{

			case 1 :  push();
				  break;

			case 2 :  pop();
				  break;

			case 3 :  disp();
				  getch();
				  break;

			case 4 :  peep();
				  break;

			case 5 :  sort();
				  break;

			case 6 :  printf("\n BYE...BYE..");
				  break;

			default : printf("\n enter proper choice :-");
				  break;



		}
		clrscr();

	}while(ch!=0);

	getch();


}