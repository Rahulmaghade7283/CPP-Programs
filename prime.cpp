#include<iostream>
using namespace std;
int main()
{
	int i,num;
	cout<<"\n enter any number";
	cin>>num;
	
	for(i=2;i<num;i++)
	{
		if(num%2==0)
		{
		cout<<" is not a prime number"<<num;
			break;
		}
		
	}
	if(num==i)
	cout<<"\n is a prime number"<<num;
	
}
