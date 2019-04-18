#include<stdio.h>
#include<conio.h>
#define qsize 5
int q[qsize],front=-1,rear=-1,i;
void enqueue();
void dequeue();
void display();
void main()
{
int ch;
clrscr();
do
{
printf("\nEnter ur choice\n");
printf("\n1.Enqueue\n2.Dequeue\n3.Diaplay\n4.exit\n");
scanf("%d",&ch);
switch(ch)
{
case 1:
enqueue();
break;
case 2:
dequeue();
break;
case 3:
display();
break;
case 4:
exit(0);
}
}while(ch!=4);
getch();
}
void enqueue()
{
if(rear==(qsize-1))
{
printf("\nQueue if full\n");
}
else
{
int ele;
++rear;
printf("\nEnter the new element toinsert\n");
scanf("%d",&ele);
q[rear]=ele;
if(rear==0)
{
front=0;
}
printf("The element%d is enqueued at the position of%d",ele,rear);}
}
void dequeue()
{
int ele;
if(front==-1)
{
printf("\nQueue is empty\n");
}
else
{
ele=q[front];
front++;
printf("\nThe dequeued element is%d\n",ele);
for(i=front;i<qsize;i++)
{
printf("%d\t",q[i]);
}
if(rear<front)
{
front=rear=-1;
}
}
}
void display()
{
if(front==-1)
{
printf("\nQueue is empty\n");
}
else
{
if(rear<=qsize)
{
for(i=0;i<=rear;i++)
{
printf("%d\t",q[i]);
}
}
}
}