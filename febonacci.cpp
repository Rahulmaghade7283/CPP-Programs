#include<iostream>
using namespace std;
int main()
{
	int i,n,a,b,c,sum=0;
	cout<<"\n enter the range";
	cin>>n;
	
	a=0;
	b=1;
	sum=a+b;
	 
	cout<<"\n "<<a<<b;
	
	for(i=1;i<=n-1;i++)
	{
		c=a+b;
		cout<<"\n "<<c;
		sum=sum+c;
		a=b;
		b=c;
		cout<<" sum "<<sum;
	 } 
}
