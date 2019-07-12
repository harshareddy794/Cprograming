#include<iostream.h>
#include<conio.h>
class incre
{
int a,b,c;
public:
incre()
{
cout<<"\nEnter three numbers:";
cin>>a>>b>>c;
}
void operator++()
{
++a;
++b;
++c;
}
void display()
{
cout<<"\nA="<<a<<"\tB="<<b<<"\tC="<<c;
}
};
void main()
{
clrscr();
incre obj;
obj.display();
++obj;
obj.display();
getch();
}