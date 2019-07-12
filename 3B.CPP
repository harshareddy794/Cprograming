#include<iostream.h>
#include<conio.h>
class  inli
{
public:
inline float squ(float x)
{
return(x*x);
}
inline float cub(float x)
{
return(x*x*x);
}
};
void main()
{
inli obj;
float val;
clrscr();
cout<<"\nEnter a value";
cin>>val;
cout<<"\nSqure of value is "<<obj.squ(val);
cout<<"\nCube of value is "<<obj.cub(val);
getch();
}
