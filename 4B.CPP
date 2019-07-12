#include<iostream.h>
#include<conio.h>
class comp
{
int re,im;
public:
void get()
{
cout<<"Enter real and imaginary part of number";
cin>>re>>im;
}
comp operator+(comp obj)
{
comp t;
t.re=re+obj.re;
t.im=im+obj.im;
return(t);
}
void display()
{
cout<<"Real="<<re<<"+"<<im<<"i"<<endl;
}
};

void main()
{
clrscr();
comp obj1,obj2,result;
obj1.get();
obj2.get();
result=obj1+obj2;
cout<<"\nEntered values\n";
obj1.display();
obj2.display();
cout<<"\nResult\n";
result.display();
getch();
}