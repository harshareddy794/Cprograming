#include<stdio.h>
#include<conio.h>
void create();
void display();
void del();
int a[20],i,n;
void main()
{
int ch;
clrscr();
do
{
printf("\n1.Create\n2.Display\n3.Delete array\n");
printf("4.Exit\n");
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
del();
break;
case 4:
exit(0);
}
}while(ch!=4);
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
void del()
{
int pos;
printf("\nEnter position to insert\n");
scanf("%d",&pos);
for(i=pos-1;i<n;i++)
{
a[i]=a[i+1];
}
n=n-1;
}