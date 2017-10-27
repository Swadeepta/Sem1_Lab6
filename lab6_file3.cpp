#include <iostream>
using namespace std;
int main()
{
  int arr[10];
  int * p=NULL;
  int b;
  cout << "enter values: ";
  for (int j = 0; j<10;j++){
  cin >> b;
  arr[j] = b;} 
  cout << "the elements are(by normal method): ";
  for (int i =0 ; i<10;i++)
  {
 cout << arr[i] << " ";}
  cout << "the elements are(by pointer method): "; 
  p = &arr[0];
int i = 0;
  while (i < 10){
    cout << *(p+i) << " "; i++;
  }
 
  return 0;
}