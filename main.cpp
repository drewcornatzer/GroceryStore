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
  if(input=='a'||input=='A'){
      if(numItems==5){
    cout<<"ERROR: You'll need a bigger list!";
}
else if(numItems<5){ cout<<"What is the item?"<<endl;
  cin>>list[numItems];
  numItems++;
}  
}
} while(input!='Q');
  return 0;
}
