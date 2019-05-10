//Programmer:E.Keerthi
//Mobile bill generation program
#include<stdio.h>
#include<conio.h>
struct bill              //Structure data type for User data
{
char name[30];
char number[11];
int billno;
int balance;
int inccall;
char type[10];
}B;
int  user_name=123;    //User name and password is used to loging to menu
int password=456;
int count=3;          //Count is used to limit number of login attempts by user
void login();
void generate_record();
void del_record();
void modify_record();
void print_record();
void main()
{
clrscr();
login();
getch();
}
void login()             //Function used to login into system
{
int usr,pwd,ch;
printf("Please Enter user name:");
scanf("%d",&usr);
printf("Please Enter password:");
scanf("%d",&pwd);
if((user_name==usr)&&(password==pwd))    //condition for checking user name and password given by user with data base
{
printf("\nLOGIN SUCESSFUL!!!\n");
do
{
printf("\n\t\t\t---------MENU---------\t\t\t");     //menu generation
printf("\n1.Generate Bill\n2.Delete bill\n3.Modify Bill\n4.Print Bill\n5.Exit");
printf("\nEnter your choice:");
scanf("%d",&ch);
switch(ch)         //Switch case is used to take user choice
{
case 1:
generate_record();
break;
case 2:
del_record();
break;
case 3:
modify_record();
break;
case 4:
print_record();
break;
case 5:
exit(0);
}
}while(ch!=5);
}
 else
{
printf("Please enter correct user name and passsword\n");
count--;
printf("You have only %d entries left\n",count);
if(count==0)
{exit(0);}
login();}
}
void generate_record()                   //Takes input data
{
printf("\nPlease Enter name:");
scanf("%s",&B.name);
printf("\nPlease Enter phone number:");
scanf("%s",&B.number);
printf("\nEnter bill number:");
scanf("%d",&B.billno);
printf("\nPlease Enter Balance:");
scanf("%d",&B.balance);
printf("\nEnter incomming calls:");
scanf("%d",&B.inccall);
printf("\nEnter type of data(2G/3G/4G):");
scanf("%s",&B.type);
}
void del_record()                //delete all details from data base
{
B.name[0]='\0';
B.number[0]='\0';
B.balance=0;
B.billno=0;
B.inccall=0;
B.type[0]='\0';
}
void modify_record()             //Used to modify data in data base
{int c;
printf("\n\t\t-------Given Details are-----\n");
print_record();
printf("\n1.Modify name\n2.Modify phone number\n3.Modify bill number\n");
printf("4.Modify balance\n5.Incomming calls\n6.Modify type\n");
printf("Please enter your choice\n");
scanf("%d",&c);
switch(c)                //Used to take user choice for modifications in data base
{
case 1:
printf("\nPlease entert name to modify:");
scanf("%s",&B.name);
break;
case 2:
printf("Please enter phone number to modify:");
scanf("%s",&B.number);
break;
case 3:
printf("Pease enter bill number to modify:");
scanf("%d",&B.billno);
break;
case 4:
printf("please Enter balance to modify:");
scanf("%d",&B.balance);
break;
case 5:
printf("please enter incomming calls to modify");
scanf("%d",&B.inccall);
break;
case 6:
printf("please enter type to modify");
scanf("%s",&B.type);
break;
}
}
void print_record()                    //print Mobile bill of user with user data
{
printf("\n\t\t---------MOBILE BILL-----------\n");
printf("\t\tName: %s\n",B.name);
printf("\t\tPhone number: %s\n",B.number);
printf("\t\tBill number: %d\n",B.billno);
printf("\t\tBalance: %d\n",B.balance);
printf("\t\tIncomming calls %d\n",B.inccall);
printf("\t\tType:%s\n",B.type);
}
