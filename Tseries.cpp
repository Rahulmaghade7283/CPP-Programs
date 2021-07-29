#include<iostream>
using namespace std;
int main()
{
	int i,n,sum=0,t;
	cout<<"enter the range:";
	cin>>n;
	
	for(i=1;i<=n;i++)
	{
		t=2*i-1;
		if(i%2==0)
		{
			cout<<"\n +"<<-t;
			sum=sum+(-t);
		}
		else
		{
			cout<<"\n +"<<t;
			sum=sum+t;
		}
		cout<<"\n number of series "<<sum;
	}
}
