#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void create();
void display();
void qs(int n[100],int f,int l);
int i,n,a[100];
void main()
{
int ch;
clrscr();
do
{
printf("\n1.create\n2.display\n3.Quicksort\n4.exit\nenter your choice:");
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
qs(a,0,n-1);
break;
case 4:
exit(0);
}
}while(ch!=4);
getch();
}
void create()
{
printf("\n Enter the number of elements:");
scanf("%d",&n);
printf("\n Enter the elements:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
}
void qs(int n[100],int f,int l)
{
int i,j,p,t;
if(f<l)
{
p=f;
i=f;
j=l;
while(i<j)
{
i=f;
j=l;
while(i<j)
{
while(n[i]<=n[p]&&i<l)
i++;
while(n[j]>n[p])
j--;
if(i<j)
{
t=n[i];
n[i]=n[j];
n[j]=t;
}
}
t=n[p];
n[p]=n[j];
n[j]=t;
qs(n,f,j-1);
qs(n,j+1,l);
}
}
}
void display()
{
printf("\n Entered elements are:");
for(i=0;i<n;i++)
{
printf("%d\n",a[i]);
}
}



