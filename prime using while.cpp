#include<iostream>
using namespace std;
int main()
{
	int i,num;
	cout<<"\n enter any number=";
	cin>>num;
	i=2;
	while(i<num)
	{
		if(num%i==0)
		{
			cout<<" is not a prime number="<<num;
			break;
	    }
	     i++;	
	}
	
	
	if(num==i)
	cout<<"\n is a prime number="<<num;
}
