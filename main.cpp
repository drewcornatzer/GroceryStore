// Author: Drew Cornatzer
#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
        vector <string> list;
        int numItems = 0;
        char input;
        string item;
        do{
                cout<<"\n==GROCERY LIST MANAGER==";
                cout<<"\nEnter your choice: ";
                cout<<"\n (A)dd an item";
                cout<<"\n (Q)uit";
                cout<<"\nYour choice (A/Q): ";
                cin>>input;
                if(input=='a'||input=='A')
                {
                        cout<<"What is the item?"<<endl;
                        cin>>item;
                        list.push_back(item);
                }
        }
        while(input!='Q'&& input!='q');
        cout<<"==ITEMS TO BUY=="<<endl;
        if(list.size()==0)
        {
                cout<<"No items to buy!"<<endl;
        }
        else
        {
        for(int index=0;index<list.size();index++)
        {
                cout<<index+1;
                cout<<" "<<list[index]<<endl;
        }
        }
        return 0;
}
