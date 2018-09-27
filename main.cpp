// Author: Drew Cornatzer
#include<iostream>
#include<string>
using namespace std;

int main()
{
  string list[5]; //array of 5 strings
  int numItems = 0;
  char input;
  do
{
  cout<<"\n==GROCERY LIST MANAGER==";
  cout<<"\nEnter your choice: ";
  cout<<"\n (A)dd an item";
  cout<<"\n (Q)uit";
  cout<<"\nYour choice (A/Q): ";
  cin>>input;
  if(numItems==5 && (input=='a'|| input=='A')){
    cout<<"ERROR: You'll need a bigger list!"<<endl;
}
  else  if(input=='a'||input=='A'){
  cout<<"What is the item?"<<endl;
  cin>>list[numItems];
}  
  numItems++;
} while(input!='Q'&& numItems!=6);
  return 0;
}
