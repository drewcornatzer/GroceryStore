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
        string deleteditem;
        do{     
                if(list.size()==0)
                {
                cout<<"\n==GROCERY LIST MANAGER==";
                cout<<"\nEnter your choice: ";
                cout<<"\n (A)dd an item";
                cout<<"\n (Q)uit";
                cout<<"\nYour choice (A/Q): ";
                cin>>input;
                }   
                if(list.size()>0)
                {
                cout<<"\n==GROCERY LIST MANAGER==";
                cout<<"\nEnter your choice: ";
                cout<<"\n (A)dd an item";
                cout<<"\n (D)elete last item";
                cout<<"\n (Q)uit";
                cout<<"\nYour choice (A/Q): ";
                cin>>input;
                }
                if(input=='a'||input=='A')
                {
                        cout<<"What is the item?"<<endl;
                        cin>>item;
                        list.push_back(item);
                }
                if(input=='d'||input=='D'&&list.size()>0)
                {
                deleteditem=list.back();
                list.pop_back();
                cout<<deleteditem<<" was deleted from the list.\n";
                }
        }
        while(input!='Q'&& input!='q');
        if(list.size()==0)
        {
                cout<<"No items to buy!"<<endl;
        }
        else
        {
            cout<<"==ITEMS TO BUY=="<<endl;
            for(int index=0;index<list.size();index++)
            {
                cout<<index+1;
                cout<<" "<<list[index]<<endl;
            }
        }
        return 0;
}
