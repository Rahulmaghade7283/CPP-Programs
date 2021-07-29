#include<iostream>
using namespace std;
int main()
{
	int i,n,sum=0,t;
	cout<<"\n enter the range";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		
		cout<<" + "<<i;
		sum=sum+i;
	}
	cout<<"\n sum of series="<<sum;
	return 0; 		
}
