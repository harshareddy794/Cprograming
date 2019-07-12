#include<iostream.h>
#include<conio.h>
class base
{
int a,b;
public:
void input()
{
cout<<"Enter two values:";
cin>>a>>b;
}
friend float mean(base ob);
};
float mean(base ob)
{
return float( ob.a+ob.b)/2;
}
void main()
{
clrscr();
base obj;
obj.input();
cout<<"Mean value is:"<<mean(obj);
getch();
}