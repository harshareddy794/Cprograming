#include<stdio.h>
#include<conio.h>
void create();
void listcreation();
void insfirst();
void inslast();
void insmiddle();
void display();
struct list
{
int data;
struct list *next;
}
*head=NULL,*temp=NULL,*node=NULL;
void main()
{
int ch;
clrscr();
do
{
printf("\n1.listcreation  \n2.insert first \n3.insert middle \n4.insert last\n5.insert dispaly \n6.exit");
printf("\n enter your choice");
scanf("%d",&ch);
switch(ch)
{
case 1:
listcreation();
break;
case 2:
insfirst();
break;
case 3:
insmiddle();
break;
case 4:
inslast();
case 5:
display();
break;
case 6:
exit(0);
}
}while(ch!=6);
getch();
}
void create()
{
node=(struct list*)malloc(sizeof(struct list));
printf("\n enter the data for node \n");
scanf("%d",&node->data);
node->next=NULL;
}
void listcreation()
{
clrscr();
create ();
if(head==NULL)
{
head=node;
temp=node;
}
else
{
temp->next=node;
temp=temp->next;
}
}
void insfirst()
{
clrscr();
create();
if(head==NULL)
{
head=node;
temp=node;
}
else
{
node->next=head;
head=node;
}
}
void insmiddle()
{
int pos,i;
clrscr();
create();
if(head==NULL)
{
head=node;
temp=node;
}
else
{
printf("\n enter the position to insert \n");
scanf("%d",&pos);
temp=head;
for(i=0;i<pos-1;i++)
{
temp=temp->next;
}
node->next=temp->next;
temp->next=node;
}
}
void inslast()
{
clrscr();
create();
if(head==NULL)
{
head=node;
temp=node;
}
else
{
temp=head;
while(temp->next!=NULL)
{
temp=temp->next;
}
temp->next=node;
temp=node;
}
}
void display()
{
if(head==NULL)
{
printf("\n the list empty\n");
}
else
{
printf("%d->",head);
temp=head;
while(temp!=NULL)
{
printf("%d->|%d",temp->data,temp->next);
temp=temp->next;
}
}
}
