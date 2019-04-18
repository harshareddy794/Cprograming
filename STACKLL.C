#include<stdio.h>
#include<conio.h>
void create();
void push();
void pop();
void display();
struct list
{int data;
struct list*next;
}*top=NULL,
*temp=NULL,
*node=NULL;
void main()
{int ch;
clrscr();
do
{
printf("\n1.push\n2.pop\n3.display\n4.exit\n");
printf("Enter your choice");
scanf("%d",&ch);
switch(ch)
{case 1:
push();
break;
case 2:
pop();
break;
case 3:
display();
break;
case 4:
exit(0);}
}while(ch!=4);
getch();
}
void create()
{
node=(struct list*)malloc(sizeof(struct list));
printf("\nEnter the data for node\n");
scanf("%d",&node->data);
node->next=NULL;}
void push()
{clrscr();
create();
if(top==NULL)
{top=node;temp=node;}
else
{node->next=top;
top=node;}
}
void pop()
{
clrscr();
if(top==NULL)
{printf("\nlist is empty\n");}
else
{temp=top;
top=top->next;
free(temp);}
}
void display()
{
if(top==NULL)
{printf("\nThe list is empty\n");}
else
{
printf("%d->",top);
temp=top;
while(temp!=NULL)
{printf("%d|%d->",temp->data,temp->next);
temp=temp->next;}
}
}