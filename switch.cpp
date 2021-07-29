#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"\n enter the choice";
	cin>>c;
	
	switch(c)
	{
		case 1:
			cout<<"\n enter the number "<<a<<b;
			cin>>a>>b;
			if(a>b)
			cout<<"\n a is greater";
			else
			cout<<"\n b is greater";
		break;
		
		case 2:
		cout<<"\n enter the number "<<a<<b;
		cin>>a>>b;
		
		if(a==b)
		cout<<"\n the number is equal";
		else
		cout<<"\n the number is not equal";
		break;
		
		default:
		
		cout<<"\n cases are successfully implimented";
	}
    
}
