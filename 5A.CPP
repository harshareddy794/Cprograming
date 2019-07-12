#include<iostream.h>
#include<stdlib.h>
#include<conio.h>
#define pi 3.14
class fn
{
public:
void area(int);
void area(int,int);
void area(float,int,int);
};
void fn::area(int a)
{
cout<<"\nArea of circle"<<pi*a*a;
}
void fn::area(int a,int b)
{
cout<<"\nArea of rectangle:"<<a*b;
}
void fn::area(float t,int a,int b)
{
cout<<"area of triangle"<<t*a*b;
}
void main()
{
int ch;
int a,b,r;
clrscr();
fn ob;
cout<<"\t\t\tFunction overloading";
cout<<"\n1.Circle\n2.Rectangle\n3.Triangle\n4.Exit";
cout<<"\nEnter a choice";
cin>>ch;
switch(ch)
{
case 1:
cout<<"Enter redius of circle\n";
cin>>r;
ob.area(r);
break;
case 2:
cout<<"Enter sides of rectangle\n";
cin>>a>>b;
ob.area(a,b);
break;
case 3:
cout<<"Enter Side of triangle\n";
cin>>a>>b;
ob.area(0.5,a,b);
break;
case 4:
exit(0);
default:
cout<<"choice is invalid";
break;
}
getch();
}