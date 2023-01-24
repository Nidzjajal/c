#include<stdio.h>
#include<conio.h>

#include<process.h>

# define SZ 300

struct employee
{
	int id;
	char name[20],dept[20];
	long int salary;
	int dob,date,month,year;
};

void DataEntery();
void Display();
void AddRecord();
void Delete();
void Update();

struct employee e[SZ];
	int i=0,n=0;
void main()
{
	int choice=0;
	clrscr();
	do{
	printf("\n\t\tWel Come to Employee DataBase \n");
	printf("\nProcess\n\n 1 -> DataEntery\n 2 -> Display\n 3 -> Add a Record \n 4 -> Update \n 5 -> Delete\n 0 -> Exit \n\n  -->");
	scanf("%d",&choice);

	switch(choice)
	{
		case 1 :
			DataEntery();
			getch();
			break;
		case 2 :
			Display();
			getch();
			break;
		case 3 :
			AddRecord();
			getch();
			break;
		case 4 :
			Update();
			getch();
			break;
		case 5 :
			Delete();
			getch();
			break;
		case 0 :
			printf("\nBye\n");
			getch();
			exit(0);
			break;
		default :
		printf("\nEnter Right Choice ");
		getch();
		clrscr();
		}
	}while(1);
}
void DataEntery()
{
	clrscr();
	printf("\nEnter No. of Employee -->");
	scanf("%d",&n);
	clrscr();
	for(i=0;i<n;i++)
	{
		printf("\nEnter Employee ID -->");
		scanf("%d",&e[i].id);
		printf("\nEnter Name -->");
		fflush(stdin);
		gets(e[i].name);
		printf("\nEnter Department -->");
		gets(e[i].dept);
		printf("\nEnter Salary -->");
		scanf("%ld",&e[i].salary);
		do
		{
			clrscr();
			printf("\nEnter join Date[1 to 31]  \n-->");
			scanf("%d",&e[i].date);
		}while(e[i].date<1 || e[i].date >31);
	do{
	clrscr();
	printf("\nEnter Join Month[1 to 12] \n-->");
	scanf("%d",&e[i].month);
	}while(e[i].month <1 || e[i].month > 12);
	do
	{
	clrscr();
	printf("\nEnter join Year [1950 to 2022] \n-->");
	scanf("%d",&e[i].year);
	}while(e[i].year <1950 || e[i].year >2022);
	getch();
	clrscr();
	}
}
void Display()
{
	clrscr();
	printf("\nID\tName\tDept\tSalary\tDate of Join\n");
	for(i=0;i<n;i++)
	{
	printf("\n%d\t%s\t%s\t%ld\t%d/%d/%d",e[i].id,e[i].name,e[i].dept,e[i].salary,e[i].date,e[i].month,e[i].year);
	}
	getch();
	clrscr();
}
void AddRecord()
{
	clrscr();
	printf("\nEnter Employee ID -->");
	scanf("%d",&e[i].id);
	printf("\nEnter Name -->");
	fflush(stdin);
	gets(e[i].name);
	printf("\nEnter Department -->");
	gets(e[i].dept);
	printf("\nEnter Salary -->");
	scanf("%ld",&e[i].salary);
	do
	{
	clrscr();
	printf("\nEnter join Date[1 to 31] \n -->");
	scanf("%d",&e[i].date);
	}while(e[i].date<1 || e[i].date >31);
	do{
	clrscr();
	printf("\nEnter Join Month[1 to 12] \n-->");
	scanf("%d",&e[i].month);
	}while(e[i].month <1 || e[i].month > 12);
	do
	{
	clrscr();
	printf("\nEnter join Year [1950 to 2022] \n-->");
	scanf("%d",&e[i].year);
	}while(e[i].year <1950 || e[i].year >2022);
	i++;
	n++;
	getch();
	clrscr();

}
void Update()
{
	struct employee temp;
	clrscr();
	printf("\n\t\t\t UPDATE RECORD ");
	printf("\nEnter Id to Update Record -->");
	scanf("%d",&temp.id);
	clrscr();

	for(i=0;i<n;i++)
	{
		if(e[i].id==temp.id)
		{

		   printf("\nEnter Name -->");
		   fflush(stdin);
		   gets(temp.name);
		   printf("\nEnter Department -->");
		   gets(temp.dept);
		   printf("\nEnter Salary -->");
		   scanf("%ld",&temp.salary);
		   do{
		   clrscr();
		   printf("\nEnter join Date [1 to 31] \n  -->");
		   scanf("%d",&temp.date);
		   }while(temp.date <1 || temp.date >31);
		   do{
		   clrscr();
		   printf("\nEnter Join Month [1 to 12] \n  -->");
		   scanf("%d",&temp.month);
		   }while(temp.month <1 || temp.month >12);
		   do{
		   clrscr();
		   printf("\nEnter Join year [1950 to 2022] \n  -->");
		   scanf("%d",&temp.year);
		   }while(temp.year<1950 || temp.year >2022);
		   e[i]=temp;
		   clrscr();
		   getch();
		}
		else
			printf("\n\n\t\tRecord Not Found ");
		   getch();
			clrscr();
	   }

}
void Delete()
{       clrscr();
	printf("\nLast Record will be Deleted ");
	n--;
	getch();
	clrscr();


}
