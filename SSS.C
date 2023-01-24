#include<stdio.h>
#include<conio.h>
#define SZ 3



  struct student

 {
      int rno,s1,s2,s3,total;
      char name[20];
      float per;
 }; 

  


    void DataEntery();
    void Update();
    void AddRecord();
    void Delete();
    void Display();
    void Exit();
    
    
    struct student s[SZ];
    int i=0,n=0;
    void main()
    
    
  {
         	int choice; 
         	clrscr();
         	do{	
          clrscr();
          	printf("\nProcess\n\n1->DataEntery\n2->Update\n3->Add a Record \n4->Delete\n5->Display\n0->Exit\n ->");
          	scanf("%d",&choice);
         	 
        
        
            switch(choice)	
            {	
            
              case 1 :		 DataEntery();
                      		 getch();	
                       	 break;
            
            	 case 2 :		 Update();	
                         getch();
                       	 break;
            
            	 case 3 :		 AddRecord();
                              		 getch();
                      		 break;
            
            	 case 4 :		 Delete();
                      		 getch();		
                         break;	 
            
              case 5 :		 Display();		 
                         getch();	
                	         break;	
            
              case 0 :		 Exit();		
                        getch();	
                       	 break;	 
            
            default :	
                      	 printf("\nPlease choose right choice");	
                      	 getch();	
                      	 break;	 
            
            }	
           
         }while(choice>=1);
            
  //while(1);
   clrscr();
   }		
                    	/* DataEntery */
 

void DataEntery()
{
         	clrscr();
         	printf("\n\t\t\tStudent DataEntery\n ");
         	printf("\nEnter No. of Student for DataEntery");
         	scanf("%d",&n);
         	for(i=0;i<n;i++)
         	{          /* DATA ENTERY */	
                
                	printf("\n\t\t Enter Roll NO :");	
                	scanf("%d",&s[i].rno);		
                printf("\nEnter Name :");		
                fflush(stdin);		
                gets(s[i].name);		
                printf("\nEnter mark of S1 :");
                scanf("%d",&s[i].s1);		
                printf("\nEnter mark of S2 :");
                scanf("%d",&s[i].s2);		
                printf("\nEnter mark of S3 :");
                scanf("%d",&s[i].s3);	
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
        	printf("\n\t\t\t Update Record \n");	
        printf("\nEnter Roll No. to Update Record ");
        	scanf("%d",&temp.rno);
        	for(i=0;i<n;i++)	
        {	 
           if(temp.rno==s[i].rno)
        	 {	
             printf("enter name:");
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
                 //struct student s[SZ];
                	 printf("\n\t\t\tAdd a New Record \n");
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
              
                 	/* DELETE A RECORD */
            
    void Delete()
    {
        
         	clrscr();
         	printf("\n\t\t\tDelete Record \n");
         	printf("\nEnter Roll No. to Delete Record");	
         scanf("%d",&s[i].rno); 
    } 		
    
                /* DISPLAY STUDENT DETALSLS */
            
            
  void Display()
  {
      
    
       
           	clrscr();	
            printf("\n\t\t\t Student details\n");
           	printf("\nRNO\tNAME\tS1\tS2\tS3\tTOTAL\tPER");
           	for(i=0;i<n;i++)	 
               {	
                    printf("\n%d\t%s\t%d\t%d\t%d\t%d\t%f",s[i].rno,s[i].name,s[i].s1,s[i].s2,s[i].s3,s[i].total,s[i].per);	
                }	 getch();
          
   }      

  void Exit()
  { 

          	clrscr();
          	printf("\n\n\t\t\t\tBye....");
}