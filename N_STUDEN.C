#include<stdio.h>
#include<conio.h>
#include<process.h>
#define SZ 10

struct student
{
   int rno,s1,s2,s3,total;
   char name[20];
   float per;
};

void DataEntery();
void Update();
void AddRecord();
void Deletelast();
void Display();

struct student s[SZ];
int i=0,n=0;
void main()
{
	int choice;
	clrscr();
	do{
	clrscr();
	printf("\nProcess\n\n1->DataEntery\n2->Update\n3->Add a Record \n4->Deletelast\n5->Display\n0->Exit\n");
	printf("\n enter your choice:");
	scanf("%d",&choice);


	   switch(choice)
	   {
	    case 1 :
		   DataEntery();
		   getch();
		   break;
	    case 2 :
		   Update();
		   getch();
		   break;
	    case 3 :
		   AddRecord();
		   getch();
		   break;
	    case 4 :
		   Deletelast();
		   getch();
		   break;
	    case 5 :
		   Display();
		   getch();
		   break;
	    case 0 :
		   getch();
		   exit(0);
	    default :
		   printf("\nPlease choose right choice");
		   break;
	   }clrscr();
	}while(1);
}

void DataEntery()
{
	clrscr();
	printf("\n\t\t\tSTUDENT DATA ENTERY ");
	printf("\nEnter No. of Student for DataEntery :");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{                    /* DATA ENTERY */
		printf("\n\t\t Enter Roll NO :");
		scanf("%d",&s[i].rno);
		printf("\nEnter Name :");
		fflush(stdin);
		gets(s[i].name);
		printf("\nEnter mark of S1 :");scanf("%d",&s[i].s1);
		printf("\nEnter mark of S2 :");scanf("%d",&s[i].s2);
		printf("\nEnter mark of S3 :");scanf("%d",&s[i].s3);
		s[i].total=s[i].s1+s[i].s2+s[i].s3;
		s[i].per=s[i].total/3;
		getch();
	}
}

				/* UPDATE RECORD */
void Update()
{
	struct student temp;
	clrscr();
	printf("\n\t\t\t UPDATE RECORD \n");
	printf("\nEnter Roll No. to Update Record :");
	scanf("%d",&temp.rno);
	for(i=0;i<n;i++)
	{
	   if(temp.rno==s[i].rno)
	   {
	      printf("\nEnter New Name :");
	      fflush(stdin);
	      gets(temp.name);
	      printf("\nEnter New Mark of S1 :");scanf("%d",&temp.s1);
	      printf("\nEnter New Mark of S2 :");scanf("%d",&temp.s2);
	      printf("\nEnter New Mark of S3 :");scanf("%d",&temp.s3);
	      temp.total=temp.s1+temp.s2+temp.s3;
	      temp.per=temp.total/3.0;
	      s[i]=temp;
	   }
	}
}

			/* ADD A NEW RECORD */
void AddRecord()
{
	      clrscr();
	      printf("\n\t\t\tADD A NEW RECORD \n");
	      printf("\n\t\t Enter Roll NO :");
	      scanf("%d",&s[i].rno);
	      printf("\nEnter Name :");
	      fflush(stdin);
	      gets(s[i].name);
	      printf("\nEnter mark of S1 :");scanf("%d",&s[i].s1);
	      printf("\nEnter mark of S2 :");scanf("%d",&s[i].s2);
	      printf("\nEnter mark of S3 :");scanf("%d",&s[i].s3);
	      s[i].total=s[i].s1+s[i].s2+s[i].s3;
	      s[i].per=s[i].total/3;
	      n++;
	      getch();
	}


			/* DELETE A RECORD */
void Deletelast()
{
	clrscr();
	printf("\nLast Record will be Deleted ");


	n--;
	getch();



}

		      /* DISPLAY STUDENT DETAILS */
void Display()
{


	clrscr();
	printf("\n\t\t\t    STUDENT DETAILS\n");
	printf("\nRNO\tNAME\tS1\tS2\tS3\tTOTAL\tPER");
	for(i=0;i<n;i++)
	   {
	      printf("\n%d\t%s\t%d\t%d\t%d\t%d\t%f",s[i].rno,s[i].name,s[i].s1,s[i].s2,s[i].s3,s[i].total,s[i].per);
	   }
	   getch();
}

