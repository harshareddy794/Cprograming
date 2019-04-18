#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void create();
void display();
void merg(int low,int mid,int high);
void sort(int low,int high);
int a[100],b[99],n,i;
void main()
{int ch;
clrscr();
do
{
printf("\n1.create\n2.display\n3.sort\n4.exit\nenter your choice:");
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
sort(0,n-1);
break;
case 4:
exit(0);
}
}while(ch!=4);
getch();
}
void create()
{
printf("\nEnter the number of elements:");
scanf("%d",&n);
printf("\nEnter the elements:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
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
void merg(int low,int mid,int high)
{int l1,l2,i;
for(l1=low,l2=mid+1,i=low;l1<=mid&&l2<=high;i++)
{if(a[l1]<=a[l2])
{b[i]=a[l1++];}
else
{b[i]=a[l2++];}
}
while(l1<=mid)
b[i++]=a[l1++];
while(l2<=high)
b[i++]=a[l2++];
for(i=low;i<=high;i++)
a[i]=b[i];
}
void sort(int low,int high)
{
int mid;
if(low<high)
{mid=(low+high)/2;
sort(low,mid);
sort(mid+1,high);
merg(low,mid,high);}
else
{return;}
}