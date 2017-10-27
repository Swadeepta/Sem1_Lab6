#include<iostream>
using namespace std;
int main()
{
 char str[20],*p=str;
 cout<<"Input : ";
 cin.getline(str,20);
 for(int i=0;str[i]!=NULL;i++)
 cout<<p+i<<endl;
return 0;
}
