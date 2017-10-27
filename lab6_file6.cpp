#include<iostream>
using namespace std;
int main()
{
 int count;
 char str[20],*p=str;
 cout<<"Input : ";
 cin.getline(str,20);
 for(int i=0;str[i]!=NULL;i++)
 count=i;
 for(int i=count;i>=0;i--)
 cout<<p+i<<endl;
return 0;
}

