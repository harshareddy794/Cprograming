#include<iostream.h>
#include<conio.h>
class arth
{
protected:
int nu1,nu2;
public:
void get()
{
cout<<"For addition";
cout<<"\nEnter first number";
cin>>nu1;
cout<<"\nEnter 2nd number";
cin>>nu2;
}
};
class plus:public arth
{
protected:
int sum;
public:
void add()
{
sum=nu1+nu2;
}
};
class minus
{
protected:
int n1,n2,diff;
public:
void sub()
{
cout<<"\nFor substraction";
cout<<"\nEnter 1st number";
cin>>n1;
cout<<"\nEnter 2nd number";
cin>>n2;
diff=n1-n2;
}
};
class result:public plus,public minus
{
public:
void display()
{
cout<<"\nSUM="<<sum;
cout<<"\nDIfferrence="<<diff;
}
};
void main()
{
clrscr();
result z;
z.get();
z.add();
z.sub();
z.display();
getch();
}