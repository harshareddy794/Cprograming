#include<stdio.h>
void push(char x);
int priority(char x);
char pop();
char stack[20];
int top=-1;
int main()
{
char exp[20];
char*e,x;
clrscr();
printf("\n the enter the expression \n");
gets(exp);
e=exp;
while(*e!='\0')
{
if(isalnum(*e))
printf("%c",*e);
else if(*e=='c')
push(*e);
else if(*e==')')
{
while((x=pop())!='(')
printf("%c",x);
}
else
{
while(priority(stack[top])>=priority(*e))
printf("%c",pop());
push(*e);
}
e++;
}
while(top!=-1)
{
printf("%c",pop());
}
getch();
return 0;
}
void push(char x)
{
stack[++top]=x;
}
char pop()
{
if(top==-1)
return-1;
else
return stack[top--];
}
int priority(char x)
{
if(x=='c')
return 0;
if(x=='+'||x=='-')
return 1;
if(x=='*'||x=='/'||x=='%')
return 2;
return 0;
}