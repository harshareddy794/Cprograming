#include<stdio.h>
#include<conio.h>
int a[10],i,n;
void insertsort();
void main()
{
clrscr();
printf("\nEnter no of elements to create array\n");
scanf("%d",&n);
printf("\Enter array elements\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
insertsort();
getch();
}
void insertsort()
{int temp,j;
for(i=1;i<n;i++)
{
temp=a[i];
for(j=i;j>=0;j--)
{
if(temp<a[j-1])
{a[j]=a[j-1];}
else
break;
}
a[j]=temp;
}
printf("\nSorted array elements are\n");
for(i=0;i<n;i++)
{printf("%d\t",a[i]);}
}

