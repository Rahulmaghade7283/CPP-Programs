#include<iostream>
using namespace std;
class Bank
{
	public:
		int i;
		char name[20];
		char account_type[20];
		int account_number;
		int balance;

		void initialize()
		{
			cout<<"\n Enter account holder name:";
			cin>>name;
			cout<<"\n Enter account type:";
			cin>>account_type;
			cout<<"\n Enter account_number:";
			cin>>account_number;
			cout<<"\n Enter balance to deposite: ";
			cin>>balance;
			
			cout<<"\n 1.your information\n 2.deposite\n 3.withdraw\n Enter your choice:";
			cin>>i;
			
		}
		void deposite()
		{
			int bal;
			cout<<"\n Enter the ammount to deposite:";
			cin>>bal;
			balance=bal;
			cout<<"\n Ammount deposite successful:\n your new balance:"<<balance;
		}
		void check()
		{
			int bal;
			cout<<"\n your balance:"<<balance<<"\n Enter ammount to withdraw:";
			cin>>bal;
			if(bal<=balance)
			{
				balance=bal;
				cout<<"\n remaining balance:"<<balance;	
			}
			if(0)
			{
				exit(0);
			
			}
		};
			void display()
			{
				cout<<"\n name:";
				cin>>name;
				cout<<"\n balance:"<<balance;
				
			}
			
};
		
		int main()
		{
			int i;
			Bank bk;
			bk.initialize();
	    	
	    	if(i==0)
			{
				bk.display();
			}
			else if(i==2)
			{
				bk.deposite();
			}
			else if(i==3)
			{
				bk.check();
			}
	    	return 0;
		}
