#include <iostream>
using namespace std;
char strCPY (char str1[40], char str2[40])
{
  for (int i = 0; str1[i]!=0; i++){
  str2[i] = str1[i];}
  return str2[40];
}
int Strlen(char ch[])
{
   int i;
   for(i=0;ch[i]!='\0';i++);
   return i;
}

void Strcat(char st1[],char st2[])
{
   int x=0;
   for(;st1[x]!='\0';x++);
   for(int y=0;st2[y]!='\0';y++,x++)
   {
   st1[x]=st2[y];
   }
   st1[x]='\0';
   cout<<"\nConcatenated String is: "<<st1;
}
int Strcmp(char st1[], char st2[])
{
  int t=0;
  while(st1[t]==st2[t])
  {
  if(st1[t]=='\0' || st2[t]=='\0')
   break;
  t++;
  }
  if(st1[t]=='\0' && st2[t]=='\0')
   return 0;
  else
   return 1;
}
int main()
{
  cout<<"Program to Implement snippets for the following functions: \n Strcpy\n Strcat\n Strlen\n Strcmp";
  char str1[20], str2[20], str3[20];
  cout<<"\nEnter the first String: ";
  cin>>str1;
  strCPY(str1,str3);
  cout << "original string: " << str1 << endl;
  cout << "copied string: " << str3 << endl;
  cout<<"\nEnter the second String: ";
  cin>>str2;
  int flag=Strcmp(str1,str2);
  cout<<"\nComparing the strings we find: ";
  if(flag==0)
   cout<<"Both the strings are equal";
  else
   cout<<"Both the strings are unequal";
  cout<<"\nThe length of String1 and String2 respectively is: "<<Strlen(str1)<<" and "<<Strlen(str2);
  Strcat(str1,str2);
  
  return 0;
}
  
