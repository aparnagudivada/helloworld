#include<conio.h>
#include<iostream.h>
class cuboid
{
int l,b,h,v;
public:
void getdata()
{
 cout<<"enter l,b,h";
 cin>>l>>b>>h;
 }
 void putdata()
 {
 v=l*b*h;
 cout<<"volume is"<<v<<endl;
 cout<<"length:"<<l<<endl;
 cout<<"breadth:"<<b<<endl;
 cout<<"height:"<<h<<endl;
 }
 };
 void main()
 {
  clrscr();
  cuboid c;
  c.getdata();
  c.putdata();
  getch();
  }

