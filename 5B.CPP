#include<iostream.h>
#include<stdlib.h>
#include<conio.h>
class overload
{
public:
int sum(int a,int b)
{return(a+b);}
int sum(int a,int b,int c)
{return(a+b+c);}
int sum(int a,int b,int c,int d)
{return(a+b+c+d);}
int sum(int a[],int n)
{
int sum=0;
for(int i=0;i<n;i++)
{sum=sum+a[i];}
return(sum);
};
int main()
{
clrscr();
int a,b,c,d,result;
overload ob;
cout<<"\n For 2 arguements";
cin>>a>>b;
result=ob.sum(a,b);
cout<<"\nAddition="<<result;
cout<<"\n For 3 arguements";
cin>>a>>b>>c;
result=ob.sum(a,b,c);
cout<<"\nAddition="<<result;
cout<<"\n For 4 arguements";
cin>>a>>b>>c>>d;
result=ob.sum(a,b,c,d);
cout<<"\nAddition="<<result;
cout<<"\nHow many arguements want to pass";
cin>>no;
int num[50];
cout<<"Enter"<<n<<"integers\n";
for(i=0;i<n;i++)
cin>>num[i];
result=ob.sum(num,no);
cout<<"\nAddition="<<result;
getch();
}