#include<iostream.h>
#include<conio.h>
class sumoverload
{
public:
int sum(int a,int b)
{
return(a+b);
}
int sum(int a,int b,int c)
{
return(a+b+c);
}
int sum(int a,int b,int c,int d)
{
return(a+b+c+d);
}
int sum(int a[],int n)
{
int sum=0;
for(int i=0;i<n;i++)
{
sum=sum+a[i];
}
return(sum);
}
};
void main()
{
clrscr();
int a,b,c,d,result;
sumoverload ob;
cout<<"\n\n for 2 arguments\n";
cout<<"\n enter 2 interges\n";
cin>>a>>b;
result=ob.sum(a,b);
cout<<"\n addition="<<result;
cout<<"\n\n for 3  arguments\n";
cout<<"enter 3 interges\n";
cin>>a>>b>>c;
result=ob.sum(a,b,c);
cout<<"addition="<<result;
cout<<"\n\n for 4 arguments\n";
cout<<"\n enter 4 interges\n";
cin>>a>>b>>c>>d;
result=ob.sum(a,b,c,d);
cout<<"addition="<<result;
cout<<"\n\n how  many agrument you want to enter:";
int no;
cin>>no;
int num[50];
cout<<"enter"<<no<<"interges\n";
for(int i=0;i<no;i++)
cin>>num[i];
result=ob.sum(num,no);
cout<<"addition="<<result;
getch();
}

