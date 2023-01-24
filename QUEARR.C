//Implementation of Queue using Array
int a[5];
int front=-1;
int rear=-1;

void enqueue()
{
	if(rear==4)
	{
		printf("Queue is Full");
		getch();
	}
	else
	{
		rear++;
		if (front==-1)
			front++;
		printf("Enter Data in Queue");
		scanf("%d", &a[rear]);	
	}

}

void dequeue()
{
	if(rear==-1)
		printf("Queue is Empty");
	else
	{
	 if(front<=rear)
	 {
	   if(front==rear)
	      front=rear=-1;
	   else
	      front++;
	   printf("Data in Deleted from Queue");
	 }
	}

	getch();
}
void disp()
{
	int i;
	for(i=front;i<=rear;i++)
	{
		printf("%d",a[i]);
	}
	getch();
}

void main()
{
	char ch;

     do
     {
	clrscr();
	printf("E for Enqueue\n");
	printf("D for Dqueue\n");
	printf("P for Display\n");
	printf("Enter your choice");
	scanf("%c",&ch);
	if(ch=='E' ||ch=='e')
	{
		enqueue();
	}
	else if(ch=='D' || ch=='d')
	{
		dequeue();
	}
	else if(ch=='P' || ch=='p')
	{
		disp();
	}
     }
     while(ch!='X' && ch!='x');
}





