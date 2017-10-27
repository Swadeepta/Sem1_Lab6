#include<iostream>
using namespace std;
int main()
{
 int a,b,*p=&a;
 cout<<"Enter value for a and b : ";
 cin>>a>>b;
 b=*p;
 cout<<"\n Assigning the of *p to b -> "<<"a = "<<a<<" b = "<<b<<" *p= "<<*p;
 cout<<"\n\nAssigning a = 2 and b = 3.....We get";
 a=2;
 b=3;
 cout<<"\n "<<"a = "<<a<<" b = "<<b<<" *p= "<<*p;
 cout<<"\n\nWhen pointer p is pointing at b.....We get";
 p=&b;
 cout<<"\n "<<"a = "<<a<<" b = "<<b<<" *p= "<<*p;
return 0;
}
