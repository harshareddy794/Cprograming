#include<stdio.h>
#include<conio.h>
struct Node
{
int data;
struct Node *next;
}*front = NULL,*rear = NULL,*temp=NULL;
int value;
void enqueue();
void dequeue();
void display();
void main()
{
int ch;
clrscr();
printf("*** Queue Implementation using Linked List *** \n");
do{
printf("1. Insert\n2. Delete\n3. Display\n4. Exit\n");
printf("Enter your choice: \n");
scanf("%d",&ch);
switch(ch){
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
}while(ch<=4);
getch();
}
void enqueue()
{
struct Node *newNode;
printf("Enter the value to be insert: ");
scanf("%d", &value);

newNode = (struct Node*)malloc(sizeof(struct Node));
newNode->data = value;
newNode -> next = NULL;
if(front == NULL)
front = rear = newNode;
else{
rear -> next = newNode;
rear = newNode;
}
printf("The enqueued element is %d \n",value);
}
void dequeue()
{
if(front == NULL)
printf("Queue is Empty\n");
else{
temp = front;
front = front -> next;
printf("Deleted element is %d\n", temp->data);
free(temp);
}
}
void display()
{
if(front == NULL)
printf("Queue is Empty!!!\n");
else{
struct Node *temp = front;
while(temp->next != NULL){
printf("%d--->",temp->data);
temp = temp -> next;
}
printf("%d--->NULL\n",temp->data);
}
}