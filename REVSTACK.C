#include<stdio.h>
#include<conio.h>
#define size 10
int top=-1,i=-1;
char stack[size],output[size];
void push();
void pop();
void display();
void main()
{int ch;
clrscr();
do
{
printf("1.push\n2.pop\n3.Display\n4.exit\n");
printf("Enter yur choice\n");
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
exit(0);
}
}while(ch!=4);
getch();
}
void push()
{
if(top==size-1)
{printf("\nStack is full\n");}
else
{printf("\nEnter element to push\n");
top++;
scanf("%s",&stack[top]);
}
}
void pop()
{if(top==-1)
{printf("\nStack is Empty\n");}
else
{int s;
s=stack[top];
top--;
i++;
output[i]=s;
}
}
void display()
{if(i==-1)
{printf("\nStack is Empty\n");}
else
{int j;
for(j=0;j<=i;j++)
{printf("%c\t",output[j]);}
}
}