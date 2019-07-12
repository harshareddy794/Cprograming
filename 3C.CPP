#include<iostream.h>
#include<conio.h>
class max
{
int a,b;
public:
max(int x,int y)
{
a=x;
b=y;
}
inline int big()
{
return((a>b)?a:b);
}
};
void main()
{
int on,tw;
clrscr();
cout<<"\nEnter two numbers:";
cin>>on>>tw;
max m(on,tw);
cout<<"The biggest of two numbers:"<<m.big();
getch();
}