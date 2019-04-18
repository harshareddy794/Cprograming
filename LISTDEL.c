#include<stdio.h>
#include<conio.h>
void create();
void listcreation();
void delfirst();
void delmiddle();
void dellast();
void display();
struct list
{
int data;
struct list *next;
}*head=NULL,*temp=NULL,*node=NULL,*prev=NULL;
void main()
{
int ch;
clrscr();
do
{
printf("\n1.listcrreation\n2.DeletetFirst\n3.DeletetMiddle\n4.DeletetLast\n5.display\n6.Exit\n");
printf("\nEnter ur choice\n");
scanf("%d",&ch);
switch(ch)
{
case 1:
listcreation();
break;
case 2:
delfirst();
break;
case 3:
delmiddle();
break;
case 4:
dellast();
break;
case 5:
display();
break;
case 6:
exit(0);
}
}while(ch<=6);
getch();
}

void create()
{

node=(struct list *)malloc(sizeof(struct list));
printf("\nEnter the data for node\n");
scanf("%d",&node->data);
node->next=NULL;
}

void listcreation()
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
temp->next=node;
temp=temp->next;
}
}
void delfirst()
{
clrscr();
if(head==NULL)
{
printf("\nList is empty\n");
}
else
{
temp=head;
head=head->next;
free(temp);
}
}
void delmiddle()
{
int pos,i;
clrscr();
if(head==NULL)
{
printf("\nlist is empty\n");
}
else
{
printf("\nenter the position to delete\n");
scanf("%d",&pos);
if((pos==1)||(head->next==NULL))
{
temp=head;
head=head->next;
free(temp);
}
else
{
temp=head;
for(i=1;i<pos-1;i++)
{
temp=temp->next;
}
prev=temp->next;
temp->next=temp->next->next;
free(prev);
}
}
}
void dellast()
{
clrscr();
if(head==NULL)
{
printf("\nList is empty\n");
}
else
{
temp=head;
if(head->next==NULL)
{
head=temp=NULL;
free(temp);
}
else
{
while(temp->next->next!=NULL)
{
temp=temp->next;
prev=temp->next;
}
temp->next=NULL;
free(prev);
 }
}

}
void display()
{
if(head==NULL)
{
printf("\nThe list empty\n");
}
else
{
printf("%d->",head);
temp=head;
while(temp!=NULL)
{
printf("%d|%d->",temp->data,temp->next);
temp=temp->next;
}
}
}
