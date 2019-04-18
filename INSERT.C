#include<stdio.h>
#include<conio.h>
void create();
void display();
void insfis();
void insmid();
void inslst();
int a[20],i,n;
void main()
{
int ch;
clrscr();
do
{
printf("\n1.Create\n2.Display\n3.Insert array first\n4.Insert array middle\n");
printf("5.Insert array last\n6.Exit\n");
printf("\nEnter your choice\n");
scanf("%d",&ch);
switch(ch)
{
case 1:
create();
break;
case 2:
display();
break;
case 3:
insfis();
break;
case 4:
insmid();
break;
case 5:
inslst();
break;
case 6:
exit(0);
}
}while(ch!=6);
getch();
}
void create()
{
printf("\nEnter size of array\n");
scanf("%d",&n);
printf("\nEnter array elements\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
}
void display()
{
printf("\nArray elements are");
for(i=0;i<n;i++)
{
printf("%d\t",a[i]);
}
}
void insfis()
{
for(i=n;i>=0;i--)
{a[i+1]=a[i];}
printf("\nEnter element to insert first\n");
scanf("%d",&a[i+1]);
n=n+1;
}
void insmid()
{
int pos;
printf("\nEnter position to insert\n");
scanf("%d",&pos);
for(i=n;i>=pos;i--)
{
a[i+1]=a[i];
}
printf("\Enter element\n");
scanf("%d",&a[pos]);
n=n+1;
}
void inslst()
{
printf("Enter element to insert last\n");
scanf("%d",&a[n]);
n=n+1;
}